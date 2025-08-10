# Exercise 01
## Description
This exercise consists of creating a function ft_range which returns an array of ints. This int array should contain all values between min and max.
## Objective
Create a function called `ft_range` that:
- Takes two ints as parameters (min and max)
- Creates an array containing all values from min to max-1
- Min included - max excluded
- Returns a null pointer if min >= max
- Uses only the malloc function
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int *ft_range(int min, int max);
   ```
2. **Validate parameters** (return NULL if min >= max)
3. **Calculate array size** (max - min)
4. **Allocate memory** using malloc for the integer array
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns pointer to array containing values from min to max-1
- Returns NULL if min value is greater or equal to max's value
- For example: ft_range(1, 5) returns array [1, 2, 3, 4]
## Delivery
The file must contain the `ft_range` function implementation.
## Technical Notes
- Only the malloc function is allowed
- Calculate size as (max - min) integers
- Fill array with consecutive values starting from min
- Return NULL if min >= max or if malloc fails
- Allocate memory for (max - min) * sizeof(int) bytes
