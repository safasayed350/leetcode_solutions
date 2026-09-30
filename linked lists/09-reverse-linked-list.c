#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next;

        current->next = previous;

        previous = current;
        current = next;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf("\n");
}

int main() {
    // Test 1: Typical case
    struct ListNode n1 = {1, NULL};
    struct ListNode n2 = {2, NULL};
    struct ListNode n3 = {3, NULL};
    struct ListNode n4 = {4, NULL};
    struct ListNode n5 = {5, NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    struct ListNode* head1 = reverseList(&n1);

    printf("Test 1: ");
    printList(head1);

    // Test 2: Edge case - single node
    struct ListNode n6 = {1, NULL};

    struct ListNode* head2 = reverseList(&n6);

    printf("Test 2: ");
    printList(head2);

    return 0;
}