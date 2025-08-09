# Exercise 03
## Description
This exercise consists of creating a function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.
## Objective
Create a function called `ft_str_is_numeric` that:
- Takes a pointer to char as parameter
- Returns 1 if the string contains only digits
- Returns 0 if the string contains any non-digit character
- Returns 1 if the string is empty
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_str_is_numeric(char *str);
   ```
2. **Check for empty string** and return 1 if true
3. **Iterate through each character** in the string
4. **Verify each character** is a digit (0-9)
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 1 if all characters are digits or string is empty
- Returns 0 if any character is not a digit
## Delivery
The file must contain the `ft_str_is_numeric` function implementation.
## Technical Notes
- No external functions are allowed
- Check characters against ASCII range for digits ('0' to '9')
- Handle empty string case by returning 1
- Use character comparison with '0'-'9' range
- Return 0 immediately when a non-digit character is found
