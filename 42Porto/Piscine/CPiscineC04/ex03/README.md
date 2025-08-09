# Exercise 03
## Description
This exercise consists of creating a function that converts the initial portion of the string pointed by str to its int representation.
## Objective
Create a function called `ft_atoi` that:
- Takes a pointer to char as parameter
- Converts string to integer following specific rules
- Handles whitespace, multiple signs, and digits
- Returns the converted integer value
- Uses no external functions
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_atoi(char *str);
   ```
2. **Skip whitespace characters** at the beginning (space, tab, newline, etc.)
3. **Process + and - signs** to determine final sign (odd number of - makes negative)
4. **Convert digit characters** to build the final number
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns integer representation of the valid portion of the string
- Handles multiple signs correctly (odd - count makes result negative)
- Stops conversion at first non-digit character after signs
- For example: " ---+--+1234ab567" returns -1234
## Delivery
The file must contain the `ft_atoi` function implementation.
## Technical Notes
- No external functions are allowed
- Skip whitespace characters (space, tab, newline, carriage return, form feed, vertical tab)
- Count minus signs to determine if result should be negative
- Convert digits by subtracting '0' from character
- Stop processing at first invalid character after digits begin
