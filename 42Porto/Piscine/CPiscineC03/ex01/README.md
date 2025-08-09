# Exercise 01
## Description
This exercise consists of creating a function that reproduces the behavior of the function strncmp.
## Objective
Create a function called `ft_strncmp` that:
- Takes two pointers to char and an unsigned int as parameters
- Compares at most n characters of the two strings lexicographically
- Returns an integer less than, equal to, or greater than zero
- Uses no external functions
- Handles limited string comparison character by character
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_strncmp(char *s1, char *s2, unsigned int n);
   ```
2. **Iterate through both strings** up to n characters
3. **Compare characters** at each position within the limit
4. **Return the difference** when characters differ or limit is reached
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 0 if first n characters are identical or n is 0
- Returns negative value if s1 is lexicographically less than s2 within n characters
- Returns positive value if s1 is lexicographically greater than s2 within n characters
## Delivery
The file must contain the `ft_strncmp` function implementation.
## Technical Notes
- No external functions are allowed
- Compare ASCII values of characters within the n limit
- Handle null terminators correctly within the comparison range
- Return 0 if n is 0 (no characters to compare)
- Follow strncmp behavior exactly as specified in man strncmp
