# Exercise 00
## Description
This exercise consists of creating a program that displays its own name.
## Objective
Create a program that:
- Has a main function as entry point
- Displays the program's own name on standard output
- Uses the first argument from command line (argv[0])
- Uses only the write function
- Handles program name display correctly
## Implementation Instructions
1. **Create the main function** with the prototype:
   ```c
   int main(int argc, char **argv);
   ```
2. **Use argv[0]** to access the program name
3. **Display each character** of the program name using write
4. **Add a newline** at the end for proper formatting
5. **Compile and test** with:
   ```bash
   cc -Wall -Wextra -Werror
   ```
## Expected Result
After running the program:
- The program displays its own name followed by a newline
- For example: if compiled as ./a.out, it displays "./a.out"
## Delivery
The file must contain a complete program with main function.
## Technical Notes
- Only the write function is allowed
- Use argv[0] to get the program name
- Calculate string length to know how many characters to write
- Include newline character for proper output formatting
- Handle the program name as a string parameter
