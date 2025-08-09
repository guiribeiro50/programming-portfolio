# Exercise 07
## Description
This exercise consists of creating a function that transforms every letter to uppercase.
## Objective
Create a function called `ft_strupcase` that:
- Takes a pointer to char as parameter
- Transforms every lowercase letter to uppercase
- Leaves non-alphabetical characters unchanged
- Returns the modified string
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strupcase(char *str);
   ```
2. **Iterate through each character** in the string
3. **Check if character** is a lowercase letter (a-z)
4. **Convert to uppercase** by subtracting the ASCII difference
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- All lowercase letters in the string are converted to uppercase
- Non-alphabetical characters remain unchanged
- The function returns the original string pointer
## Delivery
The file must contain the `ft_strupcase` function implementation.
## Technical Notes
- No external functions are allowed
- Use ASCII value manipulation to convert case
- Only convert lowercase letters ('a' to 'z')
- Return the same string pointer that was passed as parameter
- Modify the original string in place
