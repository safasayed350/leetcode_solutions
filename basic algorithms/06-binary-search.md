# Binary Search

- **LeetCode:** https://leetcode.com/problems/binary-search/
- **Topic:** Basic Algorithms
- **Difficulty:** Easy–Medium
- **Language:** C

## Problem

Given a sorted array of integers and a target value, return the index of the target if it exists. Otherwise, return -1.

## Approach

Use binary search by maintaining left and right boundaries and checking the middle element.

If the middle element is smaller than the target, search the right half. If it is larger, search the left half.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`nums = [-1,0,3,5,9,12], target = 9`

Output:
`4`

### Test Case 2 — Edge Case

Input:
`nums = [2,5], target = 3`

Output:
`-1`

## Result

Passed LeetCode test cases.