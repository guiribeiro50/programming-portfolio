# Check Set Subset

## Description
This exercise consists of writing a function that checks if one set is a subset of another.

## Objective
Create a program that:
- Takes two sets as input
- Checks if the first set is a subset of the second set
- Returns a boolean value indicating the subset relationship
- Handles different set sizes and content
- Demonstrates set theory operations manually

## Implementation Instructions
1. **Create a function** that accepts two sets as parameters
2. **Iterate through elements** of the first set
3. **Check if each element** exists in the second set
4. **Return True** if all elements are found, False otherwise
5. **Handle edge cases** like empty sets or identical sets

## Expected Result
After running the program:
- Returns True if all elements of set1 are contained in set2
- Returns False if any element of set1 is not in set2
- Handles empty sets correctly (empty set is subset of any set)
- For example: {1, 2} is subset of {1, 2, 3, 4} returns True

## Delivery
The file must contain a complete Python program that checks subset relationships with tests incorporated.

## Technical Notes
- Implement subset checking manually without built-in subset methods
- Use 'in' operator to check element membership
- Handle empty sets (empty set is subset of any set)
- Consider edge cases like identical sets or completely different sets
- Ensure the function works with sets containing different data types
