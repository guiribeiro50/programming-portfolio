# Exercise 00

## Description

This exercise consists of writing a function that displays a character using the write system call.

## Objective

Write a function called `ft_putchar` that:
- Displays the character passed as a parameter
- Uses the write function to output the character
- Follows the specified prototype

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_putchar(char c);
   ```

2. **Use the write function** as follows:
   ```c
   write(1, &c, 1)
   ```

3. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

The function should correctly display any character passed as parameter to the standard output.

## Delivery

The file must contain the `ft_putchar` function implementation.

## Technical Notes

- Only the write function is allowed
- The function must use `write(1, &c, 1)` to display the character
- The prototype must be exactly as specified
- The function writes to file descriptor 1 (stdout)
