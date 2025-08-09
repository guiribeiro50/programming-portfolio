# Exercise 05
## Description
This exercise consists of creating a function that displays a string of characters on the standard output.
## Objective
Create a function called `ft_putstr` that:
- Takes a pointer to char as parameter
- Displays the string of characters on standard output
- Uses only the write function
- Handles string output character by character
- Uses no other external functions except write
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   void ft_putstr(char *str);
   ```
2. **Iterate through the string** until the null terminator
3. **Display each character** using the write function
4. **Handle the string pointer** correctly
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The string pointed by `str` is displayed on standard output
- Each character is written sequentially until the null terminator
## Delivery
The file must contain the `ft_putstr` function implementation.
## Technical Notes
- Only the write function is allowed
- Use write to output characters one by one
- Handle pointer dereferencing correctly
- Loop through the string until '\0' is found
- The function outputs the complete string to standard output
