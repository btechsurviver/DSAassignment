# Stack Code Trace Challenge (C)

Assignment: Stack Operations Using an Array

## Repository contents
- `src/original_stack.c`: Original faculty program for Tasks 1–4 and output verification.
- `src/what_if_analysis.c`: Task 5, changing `push(70)` to `push(45)`.
- `src/corrected_stack.c`: Task 6, corrected `pop()` with separate success status.
- `tests/test_empty_stack.c`: Additional Test Case 1.
- `tests/test_stack_capacity.c`: Additional Test Case 2.
- `tests/test_overflow_pop.c`: Additional Test Case 3.
- `docs/trace_results.md`: Trace summary and predicted test results.

## Compile and run
Use GCC (or another C compiler). Run commands from the repository root:

```bash
gcc src/original_stack.c -o original_stack
./original_stack

gcc src/what_if_analysis.c -o what_if_analysis
./what_if_analysis

gcc src/corrected_stack.c -o corrected_stack
./corrected_stack

gcc tests/test_empty_stack.c -o test_empty_stack
./test_empty_stack

gcc tests/test_stack_capacity.c -o test_stack_capacity
./test_stack_capacity

gcc tests/test_overflow_pop.c -o test_overflow_pop
./test_overflow_pop
```

On Windows, run the generated executable as `original_stack.exe`, etc.

## Note
Each `.c` file has its own `main()` function. Compile and execute files separately, not all together in one command.
