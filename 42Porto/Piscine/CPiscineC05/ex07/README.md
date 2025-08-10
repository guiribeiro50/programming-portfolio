# Exercise 07
## Description
This exercise consists of creating a function that returns the next prime number greater or equal to the number given as argument.
## Objective
Create a function called `ft_find_next_prime` that:
- Takes an int as parameter
- Returns the next prime number greater than or equal to nb
- Uses no external functions
- Handles prime number search efficiently
- Works with negative numbers and edge cases
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_find_next_prime(int nb);
   ```
2. **Handle negative numbers** by starting from 2 (first prime)
3. **Use iteration** to check each number starting from nb
4. **Test primality** for each candidate number
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns the smallest prime number greater than or equal to nb
- Returns 2 if nb is less than or equal to 2
- For example: ft_find_next_prime(10) returns 11, ft_find_next_prime(7) returns 7
## Delivery
The file must contain the `ft_find_next_prime` function implementation.
## Technical Notes
- No external functions are allowed
- Handle negative numbers and numbers less than 2 by returning 2
- Implement or reuse prime checking logic within the function
- Continue searching until a prime number is found
- Consider efficiency for the primality test
