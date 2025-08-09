# Exercise 02
## Description
This exercise consists of creating a function that reproduces the behavior of the function strcat.
## Objective
Create a function called `ft_strcat` that:
- Takes two pointers to char as parameters (destination and source)
- Appends the source string to the end of the destination string
- Returns a pointer to the destination string
- Uses no external functions
- Handles string concatenation by finding the end of destination
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strcat(char *dest, char *src);
   ```
2. **Find the end** of the destination string
3. **Copy characters** from source to the end of destination
4. **Include the null terminator** from source
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The source string is appended to the destination string
- The destination string is null-terminated
- The function returns a pointer to the destination string
## Delivery
The file must contain the `ft_strcat` function implementation.
## Technical Notes
- No external functions are allowed
- Find the null terminator of destination first
- Copy all characters from source including null terminator
- Overwrite the null terminator of destination with first character of source
- Return the destination pointer as specified in strcat behavior
