# Exercise 02
## Description
This exercise consists of creating a macro ABS which replaces its argument by its absolute value.
## Objective
Create a macro called `ABS` that:
- Takes a value as parameter
- Returns the absolute value of the parameter
- Works with any numeric type
- Handles both positive and negative values
- Uses no external functions
## Implementation Instructions
1. **Create the macro** with the definition:
   ```c
   #define ABS(Value)
   ```
2. **Use conditional operator** to determine sign
3. **Return positive value** regardless of input sign
4. **Handle the macro logic** correctly
## Expected Result
After defining the macro:
- ABS returns the absolute value of any number
- Works with positive and negative values
- For example: ABS(-5) returns 5, ABS(3) returns 3
## Delivery
The file must contain the ABS macro definition.
## Technical Notes
- No external functions are allowed
- Use ternary operator (condition ? value1 : value2)
- Handle negative values by negating them
- Ensure macro works with different numeric types
- Be careful with macro parameter evaluation
