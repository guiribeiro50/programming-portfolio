# Exercise 01
## Description
This exercise consists of creating a function that reproduces the behavior of the function strncpy.
## Objective
Create a function called `ft_strncpy` that:
- Takes two pointers to char and an unsigned int as parameters
- Copies at most n characters from source to destination
- Returns a pointer to the destination string
- Uses no external functions
- Handles partial string copying and null padding when necessary
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strncpy(char *dest, char *src, unsigned int n);
   ```
2. **Initialize an index** to traverse both strings
3. **Copy characters** from source to destination up to n characters
4. **Pad with null characters** if source is shorter than n
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The destination contains at most n characters from source
- If source is shorter than n, remaining positions are filled with null characters
- The function returns a pointer to the destination string
## Delivery
The file must contain the `ft_strncpy` function implementation.
## Technical Notes
- No external functions are allowed
- Use array indexing or pointer arithmetic
- Handle the n parameter correctly to limit copying
- Pad with '\0' when source length is less than n
- Return the destination pointer as specified in strncpy behavior
