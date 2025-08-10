# Exercise 00
## Description
This exercise consists of creating a program that takes a number as argument and converts it to its written letters value. This is the commented version of the program.
## Objective
Create a program called `rush-02` that:
- Takes 1 or 2 arguments (dictionary file and/or number to convert)
- Converts numbers to their written form using a dictionary
- Handles dictionary parsing with specific format rules
- Returns appropriate error messages for invalid inputs
- Uses malloc, free, open, read, close, and write functions
## Implementation Instructions
1. **Create the program** with executable name `rush-02`
2. **Parse command line arguments** (1 or 2 parameters)
3. **Read and parse dictionary** following specified format rules
4. **Convert number** to written form using dictionary entries
5. **Compile and test** with:
   ```bash
   make fclean
   make
   ```
## Expected Result
After running the program:
- Converts valid positive integers to written form
- Uses dictionary entries to build the result
- Returns "Error" for invalid arguments
- Returns "Dict Error" for dictionary parsing issues
- For example: ./rush-02 42 displays "forty two"
## Delivery
The file must contain the complete rush-02 program implementation.
## Technical Notes
- Allowed functions: write, malloc, free, open, read, close
- Parse dictionary format: [number][spaces]:[spaces][text]\n
- Handle 1 argument (number) or 2 arguments (dictionary + number)
- Trim spaces before and after dictionary values
- Free all allocated memory correctly
- Handle empty lines and various dictionary entry orders
