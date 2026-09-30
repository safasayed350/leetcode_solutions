# Move Zeroes

- **LeetCode:** https://leetcode.com/problems/move-zeroes/
- **Topic:** Basic Algorithms
- **Difficulty:** Easy
- **Language:** C

## Problem

Given an integer array, move all zeroes to the end while maintaining the relative order of the non-zero elements.

## Approach

Use a `nonZero` pointer to track the position where the next non-zero element should be placed.

Scan the array from left to right and swap each non-zero element into the correct position. This modifies the array in-place without using another array.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`[0,1,0,3,12]`

Output:
`[1,3,12,0,0]`

### Test Case 2 — Edge Case

Input:
`[0]`

Output:
`[0]`

## Result

Passed LeetCode test cases.