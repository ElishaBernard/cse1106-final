# Test Plan

The project files are in place. The C program compiled with simulated GPIO. Run the same five readings on the Pi and check the LED after each one.

| Reading | Expected status | Simulated result | Expected LED | Pi LED |
| --- | --- | --- | --- | --- |
| 67°F | WARNING | WARNING | On | On |
| 68°F | NORMAL | NORMAL | Off | Off |
| 72°F | NORMAL | NORMAL | Off | Off |
| 76°F | NORMAL | NORMAL | Off | Off |
| 77°F | WARNING | WARNING | On | On |

The simulated run showed an average of 72.00°F, saved all five CSV rows, and left WARNING in status.txt. A count of 0 and a temperature of abc were rejected. Check the CSV and status file again after running on the Pi.
