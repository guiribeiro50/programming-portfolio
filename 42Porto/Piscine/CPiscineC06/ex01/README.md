# Exercise 01
## Description
This exercise consists of creating a program that displays its given arguments.
## Objective
Create a program that:
- Has a main function as entry point
- Displays all command line arguments except argv[0]
- Shows one argument per line in the same order as command line
- Uses only the write function
- Handles multiple arguments correctly
## Implementation Instructions
1. **Create the main function** with the prototype:
   ```c
   int main(int argc, char **argv);
   ```
2. **Iterate through argv** starting from index 1
3. **Display each argument** using write function
4. **Add a newline** after each argument
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After running the program:
- Each argument (except program name) is displayed on a separate line
- Arguments appear in the same order as provided on command line
- For example: ./a.out test1 test2 test3 displays "test1", "test2", "test3" on separate lines
## Delivery
The file must contain a complete program with main function.
## Technical Notes
- Only the write function is allowed
- Skip argv[0] (program name) and start from argv[1]
- Calculate string length for each argument to write correctly
- Include newline character after each argument
- Use argc to know when to stop iterating
