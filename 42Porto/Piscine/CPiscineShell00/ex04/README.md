# Exercise 04

## Description

This exercise consists of creating a file `midLS` containing a command that lists all files and directories in the current directory with particular formatting and sorting specifications.

## Objective

Create a file `midLS` that contains the command line that:
- Lists all files and directories in the current directory
- Excludes hidden files or any file that starts with a dot (including double dot)
- Presents the results separated by comma
- Sorts by creation date
- Adds a slash (/) after directory names

## Implementation Instructions

1. **Create the file** `midLS`

2. **Add the command** that produces the listing with the specified criteria

3. **Verify the result** by executing the command contained in the file

## Expected Result

The file `midLS` must contain a command that, when executed, produces a listing:
- Without hidden files (that start with `.`)
- Separated by commas
- Sorted by creation date
- With directories identified by `/` at the end of the name

## Delivery

The file `midLS` must be present in the repository containing the correct command.

## Technical Notes

- Hidden files include all those that start with a dot (`.` and `..`)
- The sorting must be by creation date, not alphabetical order
- The comma formatting must be respected
- Directories must have the identifying slash at the end
