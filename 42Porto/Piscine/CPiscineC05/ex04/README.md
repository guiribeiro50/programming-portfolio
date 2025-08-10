# Exercise 04
## Description
This exercise consists of creating a function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index.
## Objective
Create a function called `ft_fibonacci` that:
- Takes an int as parameter (index)
- Returns the Fibonacci number at the given index using recursion
- Considers the Fibonacci sequence starts: 0, 1, 1, 2...
- Returns -1 if index is less than 0
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_fibonacci(int index);
   ```
2. **Handle negative index** by returning -1
3. **Use recursion** to calculate the Fibonacci number
4. **Handle base cases** (index 0 returns 0, index 1 returns 1)
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns the Fibonacci number at the given index if index >= 0
- Returns -1 if index is negative
- For example: ft_fibonacci(4) returns 3 (sequence: 0, 1, 1, 2, 3)
## Delivery
The file must contain the `ft_fibonacci` function implementation.
## Technical Notes
- No external functions are allowed
- Must use recursive approach (function calls itself)
- Return -1 for negative index values
- Handle base cases correctly (F(0) = 0, F(1) = 1)
- Overflows are not handled and result is undefined in such cases
