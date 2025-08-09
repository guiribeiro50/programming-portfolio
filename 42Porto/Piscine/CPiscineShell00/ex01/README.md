# Exercise 01

## Description

This exercise consists of creating a file with specific permissions that reproduces a particular result when listed with the `ls -l` command.

## Objective

Create a file called `testShell00` in the submission directory that, when listed with `ls -l`, presents the following characteristics:
- Permissions: `-r--r-xr-x`
- File name: `testShell00`
- Size: 40 bytes

## Implementation Instructions

1. **Create the file** `testShell00` in the submission directory

2. **Configure the permissions** so that the result of `ls -l` is:
   ```
   -r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
   ```

3. **Verify the result** by executing:
   ```bash
   ls -l
   ```

4. **Create the submission file** by executing:
   ```bash
   tar -cf testShell00.tar testShell00
   ```

## Expected Result

When executing `ls -l`, the result should present:
- Read permissions for the owner (`r--`)
- Read and execute permissions for the group (`r-x`)
- Read and execute permissions for other users (`r-x`)
- File size: 40 bytes

## Delivery

The final file to submit is `testShell00.tar`, created through the `tar` command specified in the instructions.

## Technical Notes

- The "XX" variables in the `ls -l` result represent the file owner and group
- The main focus is on the correct configuration of permissions and file size
- The date and time may vary according to the file creation moment
