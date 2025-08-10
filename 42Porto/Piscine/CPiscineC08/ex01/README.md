# Exercise 01
## Description
This exercise consists of creating a ft_boolean.h file. It'll compile and run the provided main appropriately.
## Objective
Create a header file called `ft_boolean.h` that:
- Defines boolean type and values
- Defines macros for even number checking and messages
- Defines success value for main return
- Makes the provided main function work correctly
- Uses no external functions
## Implementation Instructions
1. **Create the header file** named `ft_boolean.h`
2. **Define boolean type** t_bool with TRUE and FALSE values
3. **Define EVEN macro** to check if a number is even
4. **Define message macros** for even and odd cases
## Expected Result
After creating the header file:
- The provided main function compiles and runs correctly
- Displays "I have an even number of arguments." for even argc-1
- Displays "I have an odd number of arguments." for odd argc-1
- Program returns SUCCESS value
## Delivery
The file must contain the ft_boolean.h header file with all required definitions.
## Technical Notes
- No external functions are allowed
- Define t_bool as typedef for int or enum
- Define TRUE and FALSE constants
- Define EVEN macro to check if number % 2 == 0
- Define EVEN_MSG and ODD_MSG string literals
- Define SUCCESS as return value (typically 0)
