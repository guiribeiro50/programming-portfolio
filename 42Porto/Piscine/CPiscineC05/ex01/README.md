# Exercise 01
## Description
This exercise consists of creating a recursive function that returns the factorial of the number given as a parameter.
## Objective
Create a function called `ft_recursive_factorial` that:
- Takes an int as parameter
- Calculates the factorial using recursion
- Returns 0 if the argument is not valid
- Uses no external functions
- Handles factorial computation recursively
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_recursive_factorial(int nb);
   ```
2. **Validate the input** parameter (negative numbers are invalid)
3. **Use recursion** to calculate the factorial
4. **Handle base cases** like 0! = 1 and 1! = 1
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns the factorial of nb if nb is valid (>= 0)
- Returns 0 if nb is negative
- For example: ft_recursive_factorial(5) returns 120
## Delivery
The file must contain the `ft_recursive_factorial` function implementation.
## Technical Notes
- No external functions are allowed
- Use recursive approach (function calls itself)
- Return 0 for invalid arguments (negative numbers)
- Handle base cases correctly (0! = 1, 1! = 1)
- Overflows are not handled and result is undefined in such cases
