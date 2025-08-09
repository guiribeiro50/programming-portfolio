# Exercise 00
## Description
This exercise consists of creating a function that reproduces the behavior of the function strcmp.
## Objective
Create a function called `ft_strcmp` that:
- Takes two pointers to char as parameters
- Compares the two strings lexicographically
- Returns an integer less than, equal to, or greater than zero
- Uses no external functions
- Handles string comparison character by character
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_strcmp(char *s1, char *s2);
   ```
2. **Iterate through both strings** simultaneously
3. **Compare characters** at each position
4. **Return the difference** when characters differ or end is reached
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 0 if strings are identical
- Returns negative value if s1 is lexicographically less than s2
- Returns positive value if s1 is lexicographically greater than s2
## Delivery
The file must contain the `ft_strcmp` function implementation.
## Technical Notes
- No external functions are allowed
- Compare ASCII values of characters
- Handle null terminators correctly
- Return the difference between first differing characters
- Follow strcmp behavior exactly as specified in man strcmp
