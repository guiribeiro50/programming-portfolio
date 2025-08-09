# Exercise 01

## Description

This exercise consists of writing a command line that displays the list of groups of which a user is a member, based on an environment variable.

## Objective

Create a command that:
- Displays the list of groups for the login contained in the environment variable `FT_USER`
- Separates groups by commas without spaces
- Works for any user specified in the variable

## Implementation Instructions

1. **Write the command** that obtains the user's groups

2. **Format the output** with commas without spaces

3. **Test** with different values of `FT_USER`

## Expected Result

### Example 1:
For `FT_USER=nours`, the result should be:
```
god,root,admin,master,nours,bocal
```

### Example 2:
For `FT_USER=daemon`, the result should be:
```
daemon,bin
```

## Delivery

The file `print_groups.sh` must be present in the repository and be executable.

## Technical Notes

- The command must use the environment variable `FT_USER`
- The formatting must be exact: commas without spaces
- There should be no quotation marks in the final output
- The result varies according to the user specified in the variable
