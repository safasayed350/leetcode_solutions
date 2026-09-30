#include <stdio.h>

int main() {

    int nums[] = {3, 3};
    int target = 6;

    for (int i = 0; i < 2; i++) {

        for (int j = i + 1; j < 2; j++) {

            if (nums[i] + nums[j] == target) {

                printf("[%d, %d]\n", i, j);

                return 0;
            }
        }
    }

    return 0;
}