# Exercise 05

## Description

This exercise consists of creating a function that displays all different combinations of three different digits in ascending order.

## Objective

Create a function called `ft_print_comb` that:
- Displays all combinations of three different digits
- Each combination must be in ascending order
- Lists combinations by ascending order
- Uses comma and space as separators between combinations
- Uses only the write function

## Implementation Instructions

1. **Create the function** with the prototype:
   ```c
   void ft_print_comb(void);
   ```

2. **Generate all valid combinations** of three different digits

3. **Ensure ascending order** within each combination and between combinations

4. **Use proper formatting** with commas and spaces

5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```

## Expected Result

The function should display:
```
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789
```

## Delivery

The file must contain the `ft_print_comb` function implementation.

## Technical Notes

- Only the write function is allowed
- All three digits must be different (no repetition)
- Each combination must be in ascending order (e.g., 012, not 210)
- 987 is not included because 789 already exists
- 999 is not included because digit 9 repeats
- Format: three digits, comma, space (except for the last combination)
