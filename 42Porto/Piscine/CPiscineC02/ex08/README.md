# Exercise 08
## Description
This exercise consists of creating a function that transforms every letter to lowercase.
## Objective
Create a function called `ft_strlowcase` that:
- Takes a pointer to char as parameter
- Transforms every uppercase letter to lowercase
- Leaves non-alphabetical characters unchanged
- Returns the modified string
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strlowcase(char *str);
   ```
2. **Iterate through each character** in the string
3. **Check if character** is an uppercase letter (A-Z)
4. **Convert to lowercase** by adding the ASCII difference
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- All uppercase letters in the string are converted to lowercase
- Non-alphabetical characters remain unchanged
- The function returns the original string pointer
## Delivery
The file must contain the `ft_strlowcase` function implementation.
## Technical Notes
- No external functions are allowed
- Use ASCII value manipulation to convert case
- Only convert uppercase letters ('A' to 'Z')
- Return the same string pointer that was passed as parameter
- Modify the original string in place
