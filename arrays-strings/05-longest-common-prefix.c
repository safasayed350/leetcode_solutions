#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        while (strncmp(prefix, strs[i], strlen(prefix)) != 0) {
            prefix[strlen(prefix) - 1] = '\0';
        }
    }

    return prefix;
}

int main() {
    // Test 1: Typical case
    char s1[] = "flower";
    char s2[] = "flow";
    char s3[] = "flight";

    char* strs1[] = {s1, s2, s3};

    printf("Test 1: %s\n",
           longestCommonPrefix(strs1, 3));

    // Test 2: Edge case - no common prefix
    char s4[] = "dog";
    char s5[] = "racecar";
    char s6[] = "car";

    char* strs2[] = {s4, s5, s6};

    printf("Test 2: \"%s\"\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}