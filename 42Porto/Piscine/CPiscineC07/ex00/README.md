# Exercise 00
## Description
This exercise consists of creating a function that reproduces the behavior of the function strdup.
## Objective
Create a function called `ft_strdup` that:
- Takes a pointer to char as parameter (source string)
- Allocates memory for a copy of the source string
- Copies the source string to the allocated memory
- Returns a pointer to the duplicated string
- Uses only the malloc function
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   char *ft_strdup(char *src);
   ```
2. **Calculate the length** of the source string
3. **Allocate memory** using malloc for the string plus null terminator
4. **Copy characters** from source to allocated memory
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns a pointer to a newly allocated string that is a copy of src
- The returned string is independent of the original
- Returns NULL if memory allocation fails
## Delivery
The file must contain the `ft_strdup` function implementation.
## Technical Notes
- Only the malloc function is allowed
- Calculate string length manually (no strlen)
- Allocate memory for length + 1 (null terminator)
- Copy all characters including the null terminator
- Return NULL if malloc fails
