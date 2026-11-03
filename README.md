# CSE 1106 Final Project

## Project Choice
Option 1 - Smart Classroom Comfort Monitor

## Description
This project will use a Raspberry Pi and C to monitor classroom temperatures. The user will enter temperatures in Fahrenheit. Temperatures from 68°F to 76°F, including 68 and 76, will show NORMAL. Anything outside that range will show WARNING and turn on the LED.

## Requirements
- Let the user enter temperature readings in Fahrenheit.
- Show NORMAL for 68°F-76°F and WARNING for anything outside the range.
- Save each temperature and status in `data/temperature_log.csv`.
- Calculate the average of all temperatures entered.
- Turn the LED on for WARNING and off for NORMAL.
- Make it possible to change the accepted temperature range later.

## Basic Plan
1. Set up the Raspberry Pi and LED on GPIO 17.
2. Write the C program in `src/main.c`.
3. Ask the user for temperature readings.
4. Check the temperature and display NORMAL or WARNING.
5. Save the reading and status, calculate the average, and control the LED.
6. Test the program with normal, warning, and boundary temperatures.

## Program Diagram
`Temperature entered -> Check range -> Display status -> Save to file -> Update average -> Control LED`

## Team Responsibilities
Both team members will help with the code, Raspberry Pi setup, testing, and documentation.

## Project Files
- `src/main.c` - program code
- `docs/requirements.md` - requirements
- `docs/design.md` - design notes
- `docs/change_log.md` - changes made
- `tests/test_plan.md` - test plan
- `data/temperature_log.csv` - saved readings
- `status.txt` - NORMAL or WARNING

## How to Clone
```bash
git clone https://github.com/ElishaBernard/cse1106-final.git
cd cse1106-final
```

The code and testing will be completed in the next lab session.
