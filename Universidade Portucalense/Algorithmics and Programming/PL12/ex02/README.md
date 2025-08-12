# Find Common Elements

## Description
This exercise consists of writing a program that takes two lists of integers, converts them to sets, and finds their common elements.

## Objective
Create a program that:
- Takes two lists of integers as input
- Converts both lists to sets
- Finds the intersection (common elements) between the sets
- Returns the common elements as a set
- Demonstrates set operations for finding intersections

## Implementation Instructions
1. **Create a function** that accepts two lists of integers
2. **Convert both lists to sets** using set() function
3. **Find the intersection** using set operations
4. **Return the common elements** as a set
5. **Handle edge cases** like empty lists or no common elements

## Expected Result
After running the program:
- Returns a set containing only the elements present in both input lists
- Eliminates duplicates automatically through set conversion
- Shows intersection of the two input lists
- For example: [1, 2, 3, 4] and [3, 4, 5, 6] returns {3, 4}

## Delivery
The file must contain a complete Python program that finds common elements using sets with tests incorporated.

## Technical Notes
- Use Python set data structure and operations
- Handle empty lists and lists with no common elements
- Consider using set intersection methods (&, intersection())
- Ensure the function works with any lists of integers
- Consider edge cases like identical lists or completely different lists
