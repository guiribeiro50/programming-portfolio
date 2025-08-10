# Exercise 02
## Description
This exercise consists of creating an iterated function that returns the value of a power applied to a number.
## Objective
Create a function called `ft_iterative_power` that:
- Takes two ints as parameters (number and power)
- Calculates the power using iteration (loops)
- Returns 0 if power is negative
- Returns 1 for 0 power 0 case
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_iterative_power(int nb, int power);
   ```
2. **Handle negative power** by returning 0
3. **Use a loop** to calculate the power iteratively
4. **Handle special cases** like 0^0 = 1 and any number^0 = 1
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns nb raised to the power of power if power >= 0
- Returns 0 if power is negative
- For example: ft_iterative_power(2, 3) returns 8
## Delivery
The file must contain the `ft_iterative_power` function implementation.
## Technical Notes
- No external functions are allowed
- Use iterative approach (for or while loops)
- Return 0 for negative power values
- Handle 0^0 = 1 as specified
- Overflows are not handled and result is undefined in such cases
