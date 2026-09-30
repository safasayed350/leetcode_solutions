# Longest Common Prefix

- **LeetCode:** https://leetcode.com/problems/longest-common-prefix/
- **Topic:** Arrays & Strings
- **Difficulty:** Easy–Medium
- **Language:** C

## Problem

Given an array of strings, find the longest common prefix shared by all the strings.

## Approach

Use the first string as the initial prefix and compare it with each remaining string.

If a string does not start with the current prefix, shorten the prefix one character at a time until it matches.

## Complexity

- **Time:** O(n × m)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`["flower","flow","flight"]`

Output:
`"fl"`

### Test Case 2 — Edge Case

Input:
`["dog","racecar","car"]`

Output:
`""`

## Result

Passed LeetCode test cases.