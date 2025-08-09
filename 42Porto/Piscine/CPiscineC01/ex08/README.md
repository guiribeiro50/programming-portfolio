# Exercise 08
## Description
This exercise consists of creating a function which sorts an array of integers by ascending order.
## Objective
Create a function called `ft_sort_int_tab` that:
- Takes a pointer to int and the number of ints in the array as parameters
- Sorts the elements of the array in ascending order
- Modifies the original array in place
- Uses no external functions
- Handles array sorting through comparison and swapping
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   void ft_sort_int_tab(int *tab, int size);
   ```
2. **Implement a sorting algorithm** (bubble sort, selection sort, etc.)
3. **Compare adjacent elements** and swap if necessary
4. **Continue until** the array is completely sorted
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The array elements are sorted in ascending order
- The smallest element is first, the largest is last
## Delivery
The file must contain the `ft_sort_int_tab` function implementation.
## Technical Notes
- No external functions are allowed
- Use array indexing or pointer arithmetic
- Handle element comparison and swapping correctly
- Work with the original array (in-place sorting)
- The size parameter indicates the number of elements in the array
