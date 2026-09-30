# Valid Anagram

- **LeetCode:** https://leetcode.com/problems/valid-anagram/
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Language:** C

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

## Approach

Use a frequency array of size 26 because the strings contain lowercase English letters.

Increase the count for every character in `s` and decrease the count for every character in `t`. If all 26 counts are zero, the two strings are anagrams.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`s = "anagram", t = "nagaram"`

Output:
`true`

### Test Case 2 — Edge Case

Input:
`s = "rat", t = "car"`

Output:
`false`

## Result

Passed LeetCode test cases.