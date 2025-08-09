# Exercise 05

## Description

This exercise consists of creating a shell script that displays the IDs of the last 5 commits from the Git repository.

## Objective

Create a shell script called `git_commit.sh` that:
- Displays the IDs of the last 5 commits from the Git repository
- Produces output with one ID per line
- Works correctly when tested with `bash git_commit.sh | cat -e`

## Implementation Instructions

1. **Create the script** `git_commit.sh`

2. **Implement the functionality** to obtain the commit IDs

3. **Test the script** with the specified command

## Expected Result

When executing `bash git_commit.sh | cat -e`, the result should be similar to:
```
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
```

## Delivery

The file `git_commit.sh` must be present in the repository and be executable.

## Technical Notes

- The script must work in any Git repository
- Each commit ID must appear on a separate line
- The IDs shown are examples - the actual values will depend on the repository
- The test will be done in the evaluation system's own environment
