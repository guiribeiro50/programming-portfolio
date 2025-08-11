# Calculate Diagonal Sum

## Description
This exercise consists of writing a program that calculates the sum of the main diagonal of a square matrix.

## Objective
Create a program that:
- Takes a square matrix (2D list) as input
- Calculates the sum of elements on the main diagonal
- Returns the diagonal sum as an integer
- Handles square matrices of any size
- Demonstrates matrix operations and indexing

## Implementation Instructions
1. **Create a function** that accepts a square matrix (2D list)
2. **Iterate through the matrix** accessing diagonal elements
3. **Sum the diagonal elements** where row index equals column index
4. **Return the total sum** of the main diagonal
5. **Handle edge cases** like empty matrix or single element matrix

## Expected Result
After running the program:
- Returns the sum of all elements on the main diagonal
- Main diagonal consists of elements where row index = column index
- Works with square matrices of any dimension
- For example: matrix[[1,2,3],[4,5,6],[7,8,9]] returns 15 (1+5+9)

## Delivery
The file must contain a complete Python program that calculates diagonal sum with tests incorporated.

## Technical Notes
- Access diagonal elements using matrix[i][i] where i is the index
- Ensure the matrix is square (same number of rows and columns)
- Handle empty matrices appropriately
- Consider using range(len(matrix)) for iteration
- Validate input to ensure it's a proper square matrix
