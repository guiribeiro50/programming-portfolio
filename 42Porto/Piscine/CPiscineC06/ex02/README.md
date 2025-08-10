# Exercise 02
## Description
This exercise consists of creating a program that displays its given arguments in reverse order.
## Objective
Create a program that:
- Has a main function as entry point
- Displays all command line arguments except argv[0]
- Shows one argument per line in reverse order of the command line
- Uses only the write function
- Handles multiple arguments in reversed sequence
## Implementation Instructions
1. **Create the main function** with the prototype:
   ```c
   int main(int argc, char **argv);
   ```
2. **Iterate through argv** starting from the last argument (argc - 1)
3. **Display each argument** using write function in reverse order
4. **Add a newline** after each argument
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After running the program:
- Each argument (except program name) is displayed on a separate line
- Arguments appear in reverse order from command line
- For example: ./a.out test1 test2 test3 displays "test3", "test2", "test1" on separate lines
## Delivery
The file must contain a complete program with main function.
## Technical Notes
- Only the write function is allowed
- Skip argv[0] (program name) and iterate backwards from argc - 1 to 1
- Calculate string length for each argument to write correctly
- Include newline character after each argument
- Use decrementing loop to achieve reverse order
