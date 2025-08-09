# Exercise 01

## Description

This exercise consists of creating a function that takes a pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int as a parameter and sets the value "42" to that int.

## Objective

Create a function called `ft_ultimate_ft` that:
- Takes a 9-level pointer to int as parameter
- Sets the value 42 to the final integer through multiple pointer dereferencing
- Uses no external functions

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_ultimate_ft(int *********nbr);
   ```

2. **Dereference the pointer** 9 times to reach the final integer

3. **Set the value 42** to the integer through the multiple pointer chain

4. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

The function should modify the value of the integer pointed to by the 9-level pointer parameter, setting it to 42.

## Delivery

The file must contain the `ft_ultimate_ft` function implementation.

## Technical Notes

- No external functions are allowed
- The function works with 9 levels of pointer dereferencing
- Use `*********nbr = 42;` to set the final value
- Handle the complex pointer chain correctly
