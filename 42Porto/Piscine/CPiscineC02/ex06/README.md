# Exercise 06
## Description
This exercise consists of creating a function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.
## Objective
Create a function called `ft_str_is_printable` that:
- Takes a pointer to char as parameter
- Returns 1 if the string contains only printable characters
- Returns 0 if the string contains any non-printable character
- Returns 1 if the string is empty
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_str_is_printable(char *str);
   ```
2. **Check for empty string** and return 1 if true
3. **Iterate through each character** in the string
4. **Verify each character** is printable (ASCII 32 to 126)
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 1 if all characters are printable or string is empty
- Returns 0 if any character is not printable
## Delivery
The file must contain the `ft_str_is_printable` function implementation.
## Technical Notes
- No external functions are allowed
- Check characters against ASCII range for printable characters (32 to 126)
- Handle empty string case by returning 1
- Printable characters include space (32) through tilde (126)
- Return 0 immediately when a non-printable character is found
