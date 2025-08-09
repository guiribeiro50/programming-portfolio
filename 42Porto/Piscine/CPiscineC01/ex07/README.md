# Exercise 07
## Description
This exercise consists of creating a function which reverses a given array of integer (first goes last, etc).
## Objective
Create a function called `ft_rev_int_tab` that:
- Takes a pointer to int and the number of ints in the array as parameters
- Reverses the order of elements in the array
- Modifies the original array in place
- Uses no external functions
- Handles array manipulation through pointer arithmetic
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   void ft_rev_int_tab(int *tab, int size);
   ```
2. **Initialize variables** for array traversal and swapping
3. **Swap elements** from both ends of the array
4. **Continue until** the middle of the array is reached
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The array elements are reversed in order
- The first element becomes the last, and vice versa
## Delivery
The file must contain the `ft_rev_int_tab` function implementation.
## Technical Notes
- No external functions are allowed
- Use array indexing or pointer arithmetic
- Handle element swapping correctly
- Work with the original array (in-place reversal)
- The size parameter indicates the number of elements in the array
