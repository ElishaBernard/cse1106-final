# Design

Status: planning template; hardware design and program behavior are not implemented.

## Hardware
- Target board: Raspberry Pi 4B (per the assignment photo).
- Sensor, GPIO pins, and wiring: confirm using the complete assignment before connecting hardware.

## Program structure
- `src/main.c`: C source placeholder.
- `data/temperature_log.csv`: reserved for temperature records; format to be confirmed.
- `status.txt`: status value (`NORMAL` or `WARNING`).

## Design decisions to document
- Reading and validating sensor input.
- Comparing temperature against the required threshold.
- Writing the CSV log and status file.
- Handling hardware and file errors.

## Build and run
Add verified commands and dependencies after implementation.
