# Exercise 04
## Description
This exercise consists of creating a function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.
## Objective
Create a function called `ft_str_is_lowercase` that:
- Takes a pointer to char as parameter
- Returns 1 if the string contains only lowercase alphabetical characters
- Returns 0 if the string contains any non-lowercase character
- Returns 1 if the string is empty
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_str_is_lowercase(char *str);
   ```
2. **Check for empty string** and return 1 if true
3. **Iterate through each character** in the string
4. **Verify each character** is lowercase alphabetical (a-z)
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 1 if all characters are lowercase alphabetical or string is empty
- Returns 0 if any character is not lowercase alphabetical
## Delivery
The file must contain the `ft_str_is_lowercase` function implementation.
## Technical Notes
- No external functions are allowed
- Check characters against ASCII range for lowercase letters ('a' to 'z')
- Handle empty string case by returning 1
- Use character comparison with 'a'-'z' range only
- Return 0 immediately when a non-lowercase character is found
