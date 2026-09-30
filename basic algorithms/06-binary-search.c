#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    // Test 1: Typical case
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int size1 = 6;
    int target1 = 9;

    printf("Test 1: %d\n", search(nums1, size1, target1));

    // Test 2: Edge case - target not present
    int nums2[] = {2, 5};
    int size2 = 2;
    int target2 = 3;

    printf("Test 2: %d\n", search(nums2, size2, target2));

    return 0;
}