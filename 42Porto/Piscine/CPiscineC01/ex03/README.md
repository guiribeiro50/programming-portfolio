# Exercise 03

## Description

This exercise consists of creating a function that divides two integers and stores both the result and remainder in variables through pointers.

## Objective

Create a function called `ft_div_mod` that:
- Takes two integers and two pointers to int as parameters
- Divides parameter `a` by parameter `b`
- Stores the division result in the int pointed by `div`
- Stores the remainder in the int pointed by `mod`
- Uses no external functions

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_div_mod(int a, int b, int *div, int *mod);
   ```

2. **Perform the division** of `a` by `b`

3. **Store the quotient** in the integer pointed by `div`

4. **Store the remainder** in the integer pointed by `mod`

5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

After calling the function:
- The integer pointed by `div` contains the quotient of `a / b`
- The integer pointed by `mod` contains the remainder of `a % b`

## Delivery

The file must contain the `ft_div_mod` function implementation.

## Technical Notes

- No external functions are allowed
- Use the `/` operator for division
- Use the `%` operator for remainder (modulo)
- Handle pointer dereferencing correctly
- The function performs both operations in a single call
