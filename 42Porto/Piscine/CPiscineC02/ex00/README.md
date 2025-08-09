# Exercise 00
## Description
This exercise consists of creating a function that reproduces the behavior of the function strcpy.
## Objective
Create a function called `ft_strcpy` that:
- Takes two pointers to char as parameters (destination and source)
- Copies the string from source to destination
- Returns a pointer to the destination string
- Uses no external functions
- Handles string copying character by character including null terminator
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strcpy(char *dest, char *src);
   ```
2. **Initialize an index** to traverse both strings
3. **Copy each character** from source to destination
4. **Include the null terminator** in the copy process
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The destination string contains an exact copy of the source string
- The function returns a pointer to the destination string
## Delivery
The file must contain the `ft_strcpy` function implementation.
## Technical Notes
- No external functions are allowed
- Use array indexing or pointer arithmetic
- Handle pointer dereferencing correctly
- Copy all characters including the null terminator
- Return the destination pointer as specified in strcpy behavior
