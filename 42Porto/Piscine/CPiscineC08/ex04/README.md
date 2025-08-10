# Exercise 04
## Description
This exercise consists of creating a function that takes an array of string as argument and the size of this array.
## Objective
Create a function called `ft_strs_to_tab` that:
- Takes an int and a pointer to char pointer as parameters
- Transforms each element of av into a structure
- Creates an array of t_stock_str structures
- Returns NULL pointer if an error occurs
- Uses malloc and free functions only
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   struct s_stock_str *ft_strs_to_tab(int ac, char **av);
   ```
2. **Allocate memory** for array of structures (ac + 1 elements)
3. **Fill each structure** with size, str, and copy fields
4. **Set last element's str to 0** to mark end of array
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns array of t_stock_str structures containing string data
- Each structure has size (string length), str (original), and copy (duplicate)
- Array maintains order of av and ends with str field set to 0
- Returns NULL if malloc fails
## Delivery
The file must contain the `ft_strs_to_tab` function implementation.
## Technical Notes
- Only malloc and free functions are allowed
- Calculate string length manually for size field
- Create duplicate of each string for copy field
- Allocate memory for ac + 1 structures (extra for end marker)
- Handle memory allocation failures by returning NULL
