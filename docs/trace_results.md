# Manual Trace Results

## Original program
- Successful pushes: 10, 20, 30, 40, 50, 60
- First pop returns 30
- `push(70)` causes Stack Overflow
- Later pops return 60, 50, 40, 20, 10
- One additional pop causes Stack Underflow and returns -1
- Final `top = -1`; logical Stack is empty

## What-if
Changed `push(70)` to `push(45)`. Since the Stack is full, `push(45)` also causes overflow. Stack contents do not change.

## Additional tests
1. Empty Stack pop: underflow; returns -1.
2. Push 1 through 5: all inserted; top = 4.
3. Push 1 through 6: push 6 overflows; pop returns 5; Stack becomes 1, 2, 3, 4.

## Verification
Compile each source file separately and compare its output with the predicted result. Record any differences here.
