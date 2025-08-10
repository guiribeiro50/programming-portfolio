# Exercise 03
## Description
This exercise consists of creating a recursive function that returns the value of a power applied to a number.
## Objective
Create a function called `ft_recursive_power` that:
- Takes two ints as parameters (number and power)
- Calculates the power using recursion
- Returns 0 if power is negative
- Returns 1 for 0 power 0 case
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_recursive_power(int nb, int power);
   ```
2. **Handle negative power** by returning 0
3. **Use recursion** to calculate the power
4. **Handle base cases** like any number^0 = 1 and 0^0 = 1
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns nb raised to the power of power if power >= 0
- Returns 0 if power is negative
- For example: ft_recursive_power(2, 3) returns 8
## Delivery
The file must contain the `ft_recursive_power` function implementation.
## Technical Notes
- No external functions are allowed
- Use recursive approach (function calls itself)
- Return 0 for negative power values
- Handle base cases correctly (any number^0 = 1, 0^0 = 1)
- Overflows are not handled and result is undefined in such cases
