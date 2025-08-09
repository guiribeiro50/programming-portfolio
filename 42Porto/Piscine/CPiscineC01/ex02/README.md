# Exercise 02

## Description

This exercise consists of creating a function that swaps the value of two integers whose addresses are entered as parameters.

## Objective

Create a function called `ft_swap` that:
- Takes two pointers to int as parameters
- Swaps the values of the two integers
- Uses no external functions

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_swap(int *a, int *b);
   ```

2. **Swap the values** of the integers pointed to by the parameters

3. **Use a temporary variable** or another swapping method

4. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

After calling the function, the values of the two integers should be exchanged:
- The integer at address `a` should contain the original value of `b`
- The integer at address `b` should contain the original value of `a`

## Delivery

The file must contain the `ft_swap` function implementation.

## Technical Notes

- No external functions are allowed
- The function works with pointer dereferencing
- Use a temporary variable to facilitate the swap
- Both original values must be preserved during the exchange
