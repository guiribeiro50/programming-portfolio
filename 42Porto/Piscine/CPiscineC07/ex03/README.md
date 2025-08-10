# Exercise 03
## Description
This exercise consists of creating a function that will concatenate all the strings pointed by strs separated by sep.
## Objective
Create a function called `ft_strjoin` that:
- Takes an int, a pointer to char pointer, and a pointer to char as parameters
- Concatenates all strings in strs array separated by sep
- size is the number of strings in strs
- Returns a freeable empty string if size is 0
- Uses only the malloc function
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strjoin(int size, char **strs, char *sep);
   ```
2. **Handle size 0** by returning an allocated empty string
3. **Calculate total length** needed for result string
4. **Allocate memory** for the final concatenated string
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns pointer to new string containing all strs joined by sep
- Returns allocated empty string if size is 0
- For example: joining ["Hello", "World"] with ", " returns "Hello, World"
## Delivery
The file must contain the `ft_strjoin` function implementation.
## Technical Notes
- Only the malloc function is allowed
- Calculate lengths of all strings and separators manually
- Handle edge cases like size 0 or NULL parameters
- Copy strings and separators in correct order
- Ensure proper null termination of result string
