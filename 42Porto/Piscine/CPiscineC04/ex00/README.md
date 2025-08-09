# Exercise 00
## Description
This exercise consists of creating a function that counts and returns the number of characters in a string.
## Objective
Create a function called `ft_strlen` that:
- Takes a pointer to char as parameter
- Counts the number of characters in the string
- Returns the length of the string as an integer
- Uses no external functions
- Handles string traversal until null terminator
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_strlen(char *str);
   ```
2. **Initialize a counter** to keep track of characters
3. **Iterate through the string** until the null terminator
4. **Count each character** in the string
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The function returns the number of characters in the string
- The null terminator is not counted in the length
## Delivery
The file must contain the `ft_strlen` function implementation.
## Technical Notes
- No external functions are allowed
- Use a loop to traverse the string
- Handle pointer dereferencing correctly
- Stop counting when '\0' is encountered
- Return the total count as an integer
