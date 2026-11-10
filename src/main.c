#include <stdio.h>
#include <math.h>
#include <pigpio.h>

#define LED_PIN 17
#define MIN_TEMP 68.0
#define MAX_TEMP 76.0

static int read_number(const char *prompt, double *value)
{
    char line[100], extra;
    while (1) {
        printf("%s", prompt);
        if (!fgets(line, sizeof line, stdin))
            return 0;
        if (sscanf(line, " %lf %c", value, &extra) == 1 && isfinite(*value))
            return 1;
        puts("Enter a valid number.");
    }
}

int main(void)
{
    double amount, temperature, total = 0;
    int result = 1;

    while (1) {
        if (!read_number("Number of readings (1-10000): ", &amount))
            return 1;
        if (amount >= 1 && amount <= 10000 && amount == (int)amount)
            break;
        puts("Enter a whole number from 1 to 10000.");
    }

    if (gpioInitialise() < 0) {
        puts("GPIO setup failed.");
        return 1;
    }

    gpioSetMode(LED_PIN, PI_OUTPUT);
    gpioWrite(LED_PIN, 0);

    FILE *log = fopen("data/temperature_log.csv", "a");
    if (!log)
        goto file_error;

    if (fseek(log, 0, SEEK_END) != 0)
        goto file_error;
    long size = ftell(log);
    if (size < 0 || (size == 0 && fprintf(log, "temperature_f,status\n") < 0))
        goto file_error;

    for (int i = 0; i < (int)amount; i++) {
        if (!read_number("Temperature in Fahrenheit: ", &temperature)) {
            puts("Input ended early.");
            goto done;
        }

        int warning = temperature < MIN_TEMP || temperature > MAX_TEMP;
        const char *status = warning ? "WARNING" : "NORMAL";
        gpioWrite(LED_PIN, warning);
        printf("%.2f F: %s\n", temperature, status);

        if (fprintf(log, "%.2f,%s\n", temperature, status) < 0 || fflush(log) != 0)
            goto file_error;

        FILE *latest = fopen("status.txt", "w");
        if (!latest)
            goto file_error;
        int written = fprintf(latest, "%s\n", status);
        int closed = fclose(latest);
        if (written < 0 || closed != 0)
            goto file_error;

        total += temperature;
    }

    printf("Average temperature: %.2f F\n", total / amount);
    puts("Press Enter to finish.");
    getchar();
    result = 0;
    goto done;

file_error:
    perror("Could not save readings");

done:
    if (log && fclose(log) != 0)
        result = 1;
    gpioWrite(LED_PIN, 0);
    gpioTerminate();
    return result;
}
