# Two Sum

- **LeetCode:** https://leetcode.com/problems/two-sum/
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Language:** C

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

## Approach

Use two nested loops to check every pair of elements.

For each pair, check whether:

`nums[i] + nums[j] == target`

When the sum equals the target, return the two indices.

## Complexity

- **Time:** O(n²)
- **Space:** O(1)

## Test Cases

### Test Case 1

Input:
`nums = [2,7,11,15], target = 9`

Output:
`[0,1]`

### Test Case 2

Input:
`nums = [3,3], target = 6`

Output:
`[0,1]`

## Result

Accepted on LeetCode.