# Reverse a String

- **LeetCode:** https://leetcode.com/problems/reverse-string/
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Language:** C

## Problem

Given an array of characters, reverse the string in-place using O(1) extra memory.

## Approach

Use two pointers, one starting from the beginning and one from the end of the array.

Swap the characters at both positions, then move the pointers toward the center until the string is reversed.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`["h","e","l","l","o"]`

Output:
`["o","l","l","e","h"]`

### Test Case 2 — Edge Case

Input:
`["a"]`

Output:
`["a"]`

## Result

Accepted on LeetCode.