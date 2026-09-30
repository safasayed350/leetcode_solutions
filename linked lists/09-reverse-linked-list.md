# Reverse Linked List

- **LeetCode:** https://leetcode.com/problems/reverse-linked-list/
- **Topic:** Linked Lists
- **Difficulty:** Easy
- **Language:** C

## Problem

Given the head of a singly linked list, reverse the list and return the reversed list.

## Approach

Use three pointers: `previous`, `current`, and `next`.

At each step, save the next node, reverse the current node's pointer to point to the previous node, and then move the pointers forward.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`1 -> 2 -> 3 -> 4 -> 5`

Output:
`5 -> 4 -> 3 -> 2 -> 1`

### Test Case 2 — Edge Case

Input:
`1`

Output:
`1`

## Result

Passed LeetCode test cases.