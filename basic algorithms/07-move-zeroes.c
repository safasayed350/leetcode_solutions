#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int nonZero = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[nonZero];
            nums[nonZero] = temp;

            nonZero++;
        }
    }
}

void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);

        if (i < numsSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    // Test 1: Typical case
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;

    moveZeroes(nums1, size1);

    printf("Test 1: ");
    printArray(nums1, size1);

    // Test 2: Edge case - only zero
    int nums2[] = {0};
    int size2 = 1;

    moveZeroes(nums2, size2);

    printf("Test 2: ");
    printArray(nums2, size2);

    return 0;
}