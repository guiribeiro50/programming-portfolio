# Exercise 03

## Description

This exercise consists of writing a command line that counts and displays the total number of regular files and directories in a directory structure.

## Objective

Create a command that:
- Counts all regular files and directories in the current directory and sub-directories
- Includes "." (the starting directory) in the count
- Displays only the total number

## Implementation Instructions

1. **Write the command** that counts files and directories recursively

2. **Include the starting directory** "." in the count

3. **Test** with `./count_files.sh | cat -e`

## Expected Result

Example output when executing `./count_files.sh | cat -e`:
```
42$
```

## Delivery

The file `count_files.sh` must be present in the repository and be executable.

## Technical Notes

- The count must include regular files and directories
- The starting directory "." must be counted
- The search must be recursive in all sub-directories
- The output should be only a number followed by a line break
