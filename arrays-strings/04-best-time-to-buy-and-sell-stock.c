#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main() {
    // Test 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int size1 = 6;

    printf("Test 1: %d\n", maxProfit(prices1, size1));

    // Test 2: Edge case - no profit possible
    int prices2[] = {7, 6, 4, 3, 1};
    int size2 = 5;

    printf("Test 2: %d\n", maxProfit(prices2, size2));

    return 0;
}