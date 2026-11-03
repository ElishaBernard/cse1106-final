# Design

We will use a Raspberry Pi 4B with a temperature sensor. The sensor and pin connections still need to be checked.

The basic plan is to read the temperature, save it to the CSV file, and update `status.txt` to NORMAL or WARNING based on the required limit.

The code will go in `src/main.c`. Wiring details and build steps will be added as we work on it.
