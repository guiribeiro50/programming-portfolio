# Exercise 04

## Description

This exercise consists of creating a function that divides two integers and stores both the result and remainder in the same variables through pointers.

## Objective

Create a function called `ft_ultimate_div_mod` that:
- Takes two pointers to int as parameters
- Divides the value pointed by `a` by the value pointed by `b`
- Stores the division result in the int pointed by `a`
- Stores the remainder in the int pointed by `b`
- Uses no external functions

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_ultimate_div_mod(int *a, int *b);
   ```
2. **Perform the division** of `*a` by `*b`
3. **Store the quotient** in the integer pointed by `a`
4. **Store the remainder** in the integer pointed by `b`
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result

After calling the function:
- The integer pointed by `a` contains the quotient of the original `*a / *b`
- The integer pointed by `b` contains the remainder of the original `*a % *b`

## Delivery

The file must contain the `ft_ultimate_div_mod` function implementation.

## Technical Notes

- No external functions are allowed
- Use the `/` operator for division
- Use the `%` operator for remainder (modulo)
- Handle pointer dereferencing correctly
- Store temporary values to avoid data loss during operations
