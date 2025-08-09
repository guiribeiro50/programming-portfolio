# Exercise 02
## Description
This exercise consists of creating a function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable.
## Objective
Create a function called `ft_putnbr` that:
- Takes an int as parameter
- Displays the number on standard output
- Handles all possible int values including negative numbers
- Handles the minimum int value correctly
- Uses only the write function
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   void ft_putnbr(int nb);
   ```
2. **Handle negative numbers** by displaying '-' and converting to positive
3. **Use recursion or iteration** to extract digits
4. **Convert digits to characters** and display with write
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- The number is displayed on standard output
- Negative numbers are displayed with a minus sign
- For example: ft_putnbr(42) displays "42", ft_putnbr(-42) displays "-42"
## Delivery
The file must contain the `ft_putnbr` function implementation.
## Technical Notes
- Only the write function is allowed
- Handle the special case of INT_MIN (-2147483648)
- Convert digits to ASCII characters by adding '0'
- Use recursion or build the number string to display
- Handle zero as a special case
