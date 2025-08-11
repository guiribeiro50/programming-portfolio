# Count Number Occurrences
## Description
This exercise consists of writing a program that takes a list of integers and uses a dictionary to count how many times each number appears.

## Objective
Create a program that:
- Takes a list of integers as input
- Uses a dictionary to count occurrences of each number
- Returns a dictionary with numbers as keys and their counts as values
- Handles duplicate numbers correctly
- Demonstrates dictionary usage for counting

## Implementation Instructions
1. **Create a function** that accepts a list of integers
2. **Initialize an empty dictionary** to store counts
3. **Iterate through the list** and count each number
4. **Update the dictionary** with counts for each number
5. **Return the resulting dictionary** with counts

## Expected Result
After running the program:
- Returns a dictionary where keys are the numbers and values are their counts
- All numbers from the input list are represented
- Counts accurately reflect the frequency of each number
- For example: [1, 2, 2, 3, 3, 3, 4] returns {1: 1, 2: 2, 3: 3, 4: 1}

## Delivery
The file must contain a complete Python program that counts number occurrences using a dictionary with tests incorporated.

## Technical Notes
- Use Python dictionary data structure
- Handle empty lists appropriately
- Consider using dictionary methods like .get() or .setdefault()
- Ensure the function works with any list of integers
- Consider edge cases like negative numbers or zero
