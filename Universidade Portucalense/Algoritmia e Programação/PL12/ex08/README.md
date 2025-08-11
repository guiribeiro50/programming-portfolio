# Two Sum Problem

## Description
This exercise consists of writing a function that finds two numbers in an array that add up to a specific target value and returns their indices.

## Objective
Create a program that:
* Takes an array of integers and a target integer as input
* Finds two numbers in the array that sum to the target
* Returns the indices of these two numbers
* Handles different array configurations and target values
* Ensures no element is used twice in the same solution
* Demonstrates efficient search algorithms

## Implementation Instructions
1. **Create a function** that accepts an array of integers and a target value as parameters
2. **Iterate through the array** to examine each element
3. **Calculate the complement** (target - current element) for each element
4. **Check if the complement exists** in the remaining elements
5. **Return the indices** of the two numbers that sum to target
6. **Handle edge cases** like empty arrays or no valid solution

## Expected Result
After running the program:
* Returns a list containing the indices of two numbers that add up to target
* Each input has exactly one solution
* The same element cannot be used twice
* Can return the answer in any order
* Example: nums = [2,7,11,15], target = 9 returns [0,1]
* Example: nums = [3,2,4], target = 6 returns [1,2]
* Example: nums = [3,3], target = 6 returns [0,1]
