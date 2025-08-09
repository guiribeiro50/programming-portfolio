# Exercise 05
## Description
This exercise consists of creating a function that reproduces the behavior of the function strlcat.
## Objective
Create a function called `ft_strlcat` that:
- Takes two pointers to char and an unsigned int as parameters
- Appends src to dest with size limit for the total buffer
- Returns the total length of the string it tried to create
- Uses no external functions
- Handles safe string concatenation with buffer overflow protection
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
   ```
2. **Calculate lengths** of dest and src strings
3. **Determine available space** for concatenation
4. **Copy characters** from src within the size limit
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Appends src to dest up to size-1 characters total
- Always null-terminates the result if size > 0
- Returns dest_len + src_len (total length it tried to create)
## Delivery
The file must contain the `ft_strlcat` function implementation.
## Technical Notes
- No external functions are allowed
- Calculate dest length first, but stop if it exceeds size
- Append characters from src while respecting size limit
- Always null-terminate if there's space (size > 0)
- Return the sum of original dest length and src length
