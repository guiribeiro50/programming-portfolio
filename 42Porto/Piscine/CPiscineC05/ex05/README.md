# Exercise 05
## Description
This exercise consists of creating a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
## Objective
Create a function called `ft_sqrt` that:
- Takes an int as parameter
- Returns the square root if it's a perfect square
- Returns 0 if the square root is irrational or number is negative
- Uses no external functions
- Handles integer square root calculation
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_sqrt(int nb);
   ```
2. **Handle negative numbers** by returning 0
3. **Use iteration** to find the perfect square root
4. **Check if the square** of a number equals nb
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns the integer square root if nb is a perfect square
- Returns 0 if nb is negative or not a perfect square
- For example: ft_sqrt(16) returns 4, ft_sqrt(15) returns 0
## Delivery
The file must contain the `ft_sqrt` function implementation.
## Technical Notes
- No external functions are allowed
- Handle negative numbers by returning 0
- Only return non-zero values for perfect squares
- Use iterative approach to test potential square roots
- Consider efficiency for large numbers within int range
