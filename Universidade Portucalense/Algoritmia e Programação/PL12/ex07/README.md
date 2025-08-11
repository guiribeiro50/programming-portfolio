# Sudoku Row Validator

## Description
This exercise consists of writing a function that checks if a row in a Sudoku board is valid (contains all numbers 1-9 with no duplicates).

## Objective
Create a program that:
* Takes a row (list of 9 integers) as input
* Checks if the row contains all numbers from 1 to 9
* Verifies that there are no duplicate numbers in the row
* Returns a boolean value indicating if the row is valid
* Handles different row configurations and edge cases
* Demonstrates Sudoku validation logic

## Implementation Instructions
1. **Create a function** that accepts a row (list) as parameter
2. **Check the row length** to ensure it contains exactly 9 elements
3. **Verify all numbers** are in the range 1-9
4. **Check for duplicates** by comparing length of row with length of set
5. **Return True** if row is valid, False otherwise
6. **Handle edge cases** like empty rows, wrong length, or invalid numbers

## Expected Result
After running the program:
* Returns True if row contains all numbers 1-9 with no duplicates
* Returns False if row has duplicates or missing numbers
* Handles invalid input gracefully
* Example: [5, 3, 4, 6, 7, 8, 9, 1, 2] returns True
* Example: [5, 3, 4, 6, 7, 8, 9, 1, 1] returns False
