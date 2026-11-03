# Design

We will write the program in C on the Raspberry Pi.

The user enters temperatures. The program checks if they are between 68 and 76°F and displays NORMAL or WARNING.

Readings and statuses go in data/temperature_log.csv. The latest status goes in status.txt. We will use a total and count to calculate the average.

The LED uses GPIO 21. It turns on for a warning and stays off for normal temperatures. The LED test already worked.

The minimum and maximum temperatures will be easy to change.
