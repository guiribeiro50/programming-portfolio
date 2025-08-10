# Exercise 03
## Description
This exercise consists of creating a program that displays its given arguments sorted by ascii order.
## Objective
Create a program that:
- Has a main function as entry point
- Displays all command line arguments except argv[0]
- Shows arguments sorted in ASCII order
- Displays one argument per line
- Uses only the write function
## Implementation Instructions
1. **Create the main function** with the prototype:
   ```c
   int main(int argc, char **argv);
   ```
2. **Sort the arguments** in ASCII order (excluding argv[0])
3. **Display each sorted argument** using write function
4. **Add a newline** after each argument
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After running the program:
- Each argument (except program name) is displayed on a separate line
- Arguments appear sorted in ASCII alphabetical order
- For example: ./a.out zebra apple banana displays "apple", "banana", "zebra" on separate lines
## Delivery
The file must contain a complete program with main function.
## Technical Notes
- Only the write function is allowed
- Skip argv[0] (program name) and sort argv[1] to argv[argc-1]
- Implement string comparison to sort arguments
- Use sorting algorithm (bubble sort, selection sort, etc.)
- Calculate string length for each argument to write correctly
