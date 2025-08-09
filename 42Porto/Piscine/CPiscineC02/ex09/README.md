# Exercise 09
## Description
This exercise consists of creating a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
## Objective
Create a function called `ft_strcapitalize` that:
- Takes a pointer to char as parameter
- Capitalizes the first letter of each word
- Transforms all other letters to lowercase
- A word is a string of alphanumeric characters
- Returns the modified string
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strcapitalize(char *str);
   ```
2. **Iterate through each character** in the string
3. **Identify word boundaries** using alphanumeric character detection
4. **Capitalize first character** of each word, lowercase others
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- First letter of each word is capitalized
- All other letters are lowercase
- Non-alphabetical characters act as word separators
- For example: "hello, world! 42test" becomes "Hello, World! 42test"
## Delivery
The file must contain the `ft_strcapitalize` function implementation.
## Technical Notes
- No external functions are allowed
- A word consists of alphanumeric characters (letters and digits)
- Use ASCII value manipulation for case conversion
- Track word boundaries to identify first characters
- Return the same string pointer that was passed as parameter
