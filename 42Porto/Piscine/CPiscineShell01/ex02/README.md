# Exercise 02

## Description

This exercise consists of writing a command line that searches for files with a specific extension and displays the names without the extension.

## Objective

Create a command that:
- Searches for all files that end with ".sh" in the current directory and sub-directories
- Displays only the file names without the .sh extension
- Works recursively through the entire directory structure

## Implementation Instructions

1. **Write the command** that searches for .sh files recursively

2. **Process the names** to remove the .sh extension

3. **Test** with `./find_sh.sh | cat -e`

## Expected Result

Example output when executing `./find_sh.sh | cat -e`:
```
find_sh$
file1$
file2$
file3$
```

## Delivery

The file `find_sh.sh` must be present in the repository and be executable.

## Technical Notes

- The search must be recursive (current directory and sub-directories)
- Only file names should be displayed, without paths
- The .sh extension must be removed from the output
- Each name should appear on a separate line
