# Tic-Tac-Toe Winner Checker

## Description
This exercise consists of writing a function that determines if there is a winner in a 3x3 Tic-Tac-Toe board and identifies which player won.

## Objective
Create a program that:
* Takes a 3x3 grid representing a Tic-Tac-Toe board as input
* Analyzes the board to check for winning conditions
* Identifies if Player 1 (X) or Player 2 (O) has won
* Returns "No winner yet" if there's no winner
* Handles different board configurations and game states
* Demonstrates game logic validation

## Implementation Instructions
1. **Create a function** that accepts a 3x3 board (list of lists) as parameter
2. **Check all rows** for three identical non-empty symbols
3. **Check all columns** for three identical non-empty symbols
4. **Check both diagonals** for three identical non-empty symbols
5. **Return the winning player** ('X' or 'O') if found
6. **Return "No winner yet"** if no winning condition is met

## Expected Result
After running the program:
* Returns 'X' if Player 1 has three X's in a row, column, or diagonal
* Returns 'O' if Player 2 has three O's in a row, column, or diagonal
* Returns "No winner yet" if no player has achieved a winning condition
* Handles empty cells represented by empty strings
* Example: Board with X diagonal returns "Winner: X"
