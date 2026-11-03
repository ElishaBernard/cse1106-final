# cse1106-final

CSE 1106 final project repository for a Raspberry Pi temperature-monitoring project.

## Project status
Repository setup only. `src/main.c` is a comment-only placeholder; there is no runnable program yet. Hardware wiring, implementation, and program testing remain to be completed using the full assignment.

## Repository structure
| Path | Purpose |
| --- | --- |
| `src/main.c` | C source placeholder |
| `docs/requirements.md` | Requirements and items to confirm |
| `docs/design.md` | Hardware and software design template |
| `docs/change_log.md` | Project change history |
| `tests/test_plan.md` | Planned checks and test results |
| `data/temperature_log.csv` | Empty log reserved for temperature readings |
| `status.txt` | `NORMAL` or `WARNING`; initialized to `NORMAL` for setup |
| `README.md` | Project overview and setup instructions |

The CSV is intentionally empty until the required columns and units are confirmed. The initial status does not represent a measured temperature.

## Clone the repository
Run these commands in a terminal on the development computer or Raspberry Pi with Git installed:

```bash
git clone https://github.com/ElishaBernard/cse1106-final.git
cd cse1106-final
```

If already cloned, run `git pull` inside the existing clone instead.

## Build and run
To be documented after the C program and required sensor libraries are implemented. The source placeholder cannot currently be built into an executable.

## Documentation and testing
1. Confirm requirements from the complete assignment in `docs/requirements.md`.
2. Document wiring, program flow, and dependencies in `docs/design.md`.
3. Implement the program in `src/main.c`.
4. Execute the test plan and record actual results in `tests/test_plan.md`.
5. Record meaningful changes in `docs/change_log.md` and commit them to Git.

## Remaining assignment details
- Check this README against the Lab 2 instructions, which were not included in the setup photo.
- Add the required team/course details from the assignment.
- Confirm sensor wiring, units, thresholds, sampling interval, and CSV format.
- Clone the repository onto the development computer or Raspberry Pi.
