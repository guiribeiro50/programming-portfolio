# Exercise 00
## Description
This exercise consists of creating an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
## Objective
Create a function called `ft_iterative_factorial` that:
- Takes an int as parameter
- Calculates the factorial using iteration (loops)
- Returns 0 if the argument is not valid
- Uses no external functions
- Handles factorial computation iteratively
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_iterative_factorial(int nb);
   ```
2. **Validate the input** parameter (negative numbers are invalid)
3. **Use a loop** to calculate the factorial iteratively
4. **Handle special cases** like 0! = 1
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns the factorial of nb if nb is valid (>= 0)
- Returns 0 if nb is negative
- For example: ft_iterative_factorial(5) returns 120
## Delivery
The file must contain the `ft_iterative_factorial` function implementation.
## Technical Notes
- No external functions are allowed
- Use iterative approach (for or while loops)
- Return 0 for invalid arguments (negative numbers)
- Handle 0! = 1 correctly
- Overflows are not handled and result is undefined in such cases
