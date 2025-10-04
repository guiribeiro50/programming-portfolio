# Count Word in File Lines

## Description
This exercise consists of writing a program that opens a file and counts how many lines contain a specific word.

## Objective
Create a program that:
- Opens and reads a text file
- Searches for a specific word in each line
- Counts how many lines contain the target word
- Returns the total count of lines containing the word
- Demonstrates file handling and string operations

## Implementation Instructions
1. **Create a function** that accepts a filename and target word
2. **Open and read the file** line by line
3. **Check each line** for the presence of the target word
4. **Count lines** that contain the word
5. **Handle file errors** and edge cases appropriately

## Expected Result
After running the program:
- Returns the number of lines that contain the specified word
- Handles file reading operations safely
- Counts partial matches within lines
- For example: searching "Python" in a file with 4 lines where 3 contain "Python" returns 3

## Delivery
The file must contain a complete Python program that counts word occurrences in file lines with tests incorporated.

## Technical Notes
- Use file handling with proper opening and closing (or context managers)
- Handle FileNotFoundError and other file-related exceptions
- Consider case sensitivity in word matching
- Use string methods like 'in' operator or .count() for searching
- Ensure proper file closure after reading
