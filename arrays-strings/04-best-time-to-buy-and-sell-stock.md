# Best Time to Buy and Sell Stock

- **LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
- **Topic:** Arrays & Strings
- **Difficulty:** Easy
- **Language:** C

## Problem

Given an array of stock prices, find the maximum profit from buying on one day and selling on a later day. If no profit can be made, return 0.

## Approach

Keep track of the minimum stock price seen so far while scanning the array from left to right.

For each price, calculate the profit from selling at that price and update the maximum profit if it is larger.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Test Cases

### Test Case 1 — Typical Case

Input:
`[7,1,5,3,6,4]`

Output:
`5`

### Test Case 2 — Edge Case

Input:
`[7,6,4,3,1]`

Output:
`0`

## Result

Passed LeetCode test cases.