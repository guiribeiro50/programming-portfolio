# Exercise 02
## Description
This exercise consists of creating a function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character.
## Objective
Create a function called `ft_str_is_alpha` that:
- Takes a pointer to char as parameter
- Returns 1 if the string contains only alphabetical characters
- Returns 0 if the string contains any non-alphabetical character
- Returns 1 if the string is empty
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_str_is_alpha(char *str);
   ```
2. **Check for empty string** and return 1 if true
3. **Iterate through each character** in the string
4. **Verify each character** is alphabetical (a-z or A-Z)
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 1 if all characters are alphabetical or string is empty
- Returns 0 if any character is not alphabetical
## Delivery
The file must contain the `ft_str_is_alpha` function implementation.
## Technical Notes
- No external functions are allowed
- Check characters against ASCII ranges for letters
- Handle empty string case by returning 1
- Use character comparison with 'a'-'z' and 'A'-'Z' ranges
- Return 0 immediately when a non-alphabetical character is found
