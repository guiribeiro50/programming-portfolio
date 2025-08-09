# Exercise 02

## Description

This exercise consists of creating files and directories with specific permissions that reproduce a particular result when listed with the `ls -l` command.

## Objective

Create the following files and directories that, when listed with `ls -l`, present these characteristics:
- `test0` - Directory with permissions `drwx--xr-x`
- `test1` - File with permissions `-rwx--xr--` and size 4 bytes
- `test2` - Directory with permissions `dr-x---r--`
- `test3` - File with permissions `-r-----r--` and size 1 byte
- `test4` - File with permissions `-rw-r----x` and size 2 bytes
- `test5` - File with permissions `-r-----r--` and size 1 byte
- `test6` - Symbolic link pointing to `test0`

## Implementation Instructions

1. **Create the necessary files and directories**

2. **Configure the permissions** so that the result of `ls -l` is:
   ```
   total XX
   drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
   -rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
   dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
   -r-----r-- 2 XX XX 1 Jun 1 23:44 test3
   -rw-r----x 1 XX XX 2 Jun 1 23:43 test4
   -r-----r-- 2 XX XX 1 Jun 1 23:44 test5
   lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
   ```

3. **Verify the result** by executing:
   ```bash
   ls -l
   ```

4. **Create the submission file** by executing:
   ```bash
   tar -cf exo2.tar *
   ```

## Expected Result

When executing `ls -l`, the result should present exactly the structure shown above, with:
- Two directories (`test0` and `test2`)
- Four regular files (`test1`, `test3`, `test4`, `test5`)
- One symbolic link (`test6`)
- Specific permissions for each element
- Correct sizes for the files

## Delivery

The final file to submit is `exo2.tar`, created through the `tar` command specified in the instructions.

## Technical Notes

- The "XX" variables in the `ls -l` result represent system values
- The file sizes must correspond exactly to those specified
- The symbolic link must point correctly to `test0`
- The dates and times may vary according to the creation moment
