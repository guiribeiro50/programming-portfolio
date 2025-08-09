# Exercise 03
## Description
This exercise consists of creating a function that reproduces the behavior of the function strncat.
## Objective
Create a function called `ft_strncat` that:
- Takes two pointers to char and an unsigned int as parameters
- Appends at most nb characters from source to the end of destination
- Returns a pointer to the destination string
- Uses no external functions
- Handles limited string concatenation with proper null termination
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strncat(char *dest, char *src, unsigned int nb);
   ```
2. **Find the end** of the destination string
3. **Copy at most nb characters** from source to the end of destination
4. **Add null terminator** after the copied characters
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- At most nb characters from source are appended to destination
- The destination string is always null-terminated
- The function returns a pointer to the destination string
## Delivery
The file must contain the `ft_strncat` function implementation.
## Technical Notes
- No external functions are allowed
- Find the null terminator of destination first
- Copy characters from source up to nb limit or until source ends
- Always add a null terminator after the copied characters
- Return the destination pointer as specified in strncat behavior
