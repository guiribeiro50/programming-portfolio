# Exercise 06
## Description
This exercise consists of creating a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn't.
## Objective
Create a function called `ft_is_prime` that:
- Takes an int as parameter
- Returns 1 if the number is prime
- Returns 0 if the number is not prime
- Uses no external functions
- Handles prime number detection correctly
## Implementation Instructions
1. **Create the function** with the prototype:
   ```c
   int ft_is_prime(int nb);
   ```
2. **Handle edge cases** (numbers less than 2 are not prime)
3. **Use iteration** to check for divisors
4. **Test divisibility** up to square root of the number
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After calling the function:
- Returns 1 if nb is a prime number
- Returns 0 if nb is not prime (including negative numbers, 0, and 1)
- For example: ft_is_prime(7) returns 1, ft_is_prime(8) returns 0
## Delivery
The file must contain the `ft_is_prime` function implementation.
## Technical Notes
- No external functions are allowed
- Numbers less than 2 are not considered prime
- Only check divisors up to the square root for efficiency
- Return 0 immediately when a divisor is found
- Handle special cases like 2 (the only even prime number)
