# Exercise 02
## Description
This exercise consists of creating a function ft_ultimate_range which allocates and assigns an array of ints. This int array should contain all values between min and max.
## Objective
Create a function called `ft_ultimate_range` that:
- Takes a pointer to int pointer and two ints as parameters
- Allocates and assigns an array containing values from min to max-1
- Min included - max excluded
- Returns the size of the range or -1 on error
- Sets range to NULL if min >= max and returns 0
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_ultimate_range(int **range, int min, int max);
   ```
2. **Validate parameters** (set *range to NULL and return 0 if min >= max)
3. **Calculate array size** (max - min)
4. **Allocate memory** and assign to *range
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- *range points to array containing values from min to max-1
- Returns the size of the array (max - min)
- Returns 0 if min >= max (and *range is NULL)
- Returns -1 if malloc fails
## Delivery
The file must contain the `ft_ultimate_range` function implementation.
## Technical Notes
- Only the malloc function is allowed
- Assign the allocated array to *range (modify the pointer)
- Fill array with consecutive values starting from min
- Return -1 if malloc fails, 0 if min >= max, otherwise return size
- Handle pointer to pointer correctly for array assignment
