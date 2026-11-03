# Test Plan

Status: planned; no program or hardware tests have been run.

| Test | Expected result | Result |
| --- | --- | --- |
| Repository structure | All files listed in Part A exist at the required paths. | Check after setup |
| Build | C program compiles using the documented dependencies. | Not run |
| Normal reading | A reading in the normal range produces `NORMAL`. | Not run |
| Warning reading | A reading in the warning range produces `WARNING`. | Not run |
| Threshold boundary | Behavior at the threshold matches the full assignment. | Not run |
| Temperature log | Valid readings are recorded in the required CSV format. | Not run |
| Status file | Root `status.txt` contains the appropriate status value. | Not run |
| Error handling | Sensor or file failures are handled as specified. | Not run |

Confirm thresholds, units, timing, CSV format, and error behavior before defining exact inputs and expected outputs. Record actual results and evidence after implementation.
