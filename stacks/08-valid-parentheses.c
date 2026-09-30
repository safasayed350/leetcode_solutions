#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            top++;
            stack[top] = ch;
        }
        else {
            if (top == -1) {
                return false;
            }

            char last = stack[top];

            if ((ch == ')' && last != '(') ||
                (ch == ']' && last != '[') ||
                (ch == '}' && last != '{')) {
                return false;
            }

            top--;
        }
    }

    return top == -1;
}

int main() {
    // Test 1: Typical case
    char s1[] = "()[]{}";

    printf("Test 1: %s\n", isValid(s1) ? "true" : "false");

    // Test 2: Edge case
    char s2[] = "([)]";

    printf("Test 2: %s\n", isValid(s2) ? "true" : "false");

    return 0;
}