# Valid Parentheses

- **LeetCode:** https://leetcode.com/problems/valid-parentheses/
- **Topic:** Stacks & Linked Lists
- **Difficulty:** Easy–Medium
- **Language:** C

## Problem

Given a string containing parentheses, brackets, and braces, determine whether the input string is valid.

## Approach

Use a stack to store opening brackets as they appear.

When a closing bracket is found, compare it with the most recent opening bracket. If they match, remove the opening bracket from the stack. If they do not match, the string is invalid.

## Complexity

- **Time:** O(n)
- **Space:** O(n)

## Test Cases

### Test Case 1 — Typical Case

Input:
`"()[]{}"`

Output:
`true`

### Test Case 2 — Edge Case

Input:
`"([)]"`

Output:
`false`

## Result

Passed LeetCode test cases.