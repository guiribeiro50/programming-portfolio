# Exercise 04
## Description
This exercise consists of creating a function that reproduces the behavior of the function strstr.
## Objective
Create a function called `ft_strstr` that:
- Takes two pointers to char as parameters (haystack and needle)
- Finds the first occurrence of to_find in str
- Returns a pointer to the first occurrence or NULL if not found
- Uses no external functions
- Handles substring search within a string
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strstr(char *str, char *to_find);
   ```
2. **Handle empty to_find** by returning str
3. **Iterate through str** looking for potential matches
4. **Compare substrings** when first character matches
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns pointer to first occurrence of to_find in str
- Returns NULL if to_find is not found in str
- Returns str if to_find is empty
## Delivery
The file must contain the `ft_strstr` function implementation.
## Technical Notes
- No external functions are allowed
- Handle edge case where to_find is empty string
- Use nested loops to compare potential matches
- Return pointer to the beginning of found substring
- Follow strstr behavior exactly as specified in man strstr
