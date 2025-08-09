# Exercise 04

## Description

This exercise consists of creating a function that displays 'N' or 'P' depending on the sign of an integer parameter.

## Objective

Create a function called `ft_is_negative` that:
- Takes an integer as parameter
- Displays 'N' if the number is negative
- Displays 'P' if the number is positive or null (zero)
- Uses only the write function

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_is_negative(int n);
   ```

2. **Check the sign** of the parameter `n`

3. **Display 'N' or 'P'** accordingly

4. **Use only the write function** for output

5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

- If `n < 0`: displays `N`
- If `n >= 0`: displays `P`

## Delivery

The file must contain the `ft_is_negative` function implementation.

## Technical Notes

- Only the write function is allowed
- Zero is considered positive (displays 'P')
- The function should handle any integer value
- Display only one character: either 'N' or 'P'
