# Exercise 05

## Description

This exercise consists of creating a file with a special name that contains escape characters and specific content.

## Objective

Create a file that:
- Contains only "42" and NOTHING else
- Has the exact name: `"\?$*'MaRViN'*$?\"`
- Appears correctly when listed with system commands

## Implementation Instructions

1. **Create the file** with the specified name (including all special characters)

2. **Add the content** "42" without additional line breaks

3. **Verify** with `ls -lRa *MaRV* | cat -e`

## Expected Result

Example output when executing `ls -lRa *MaRV* | cat -e`:
```
-rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
```

## Delivery

The file with the specified name must be present in the repository.

## Technical Notes

- The file name contains special characters that require escaping
- The content must be exactly "42" without additional spaces or line breaks
- The file size should be 2 bytes
- Permissions may vary according to the system
