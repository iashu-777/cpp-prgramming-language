// 1) Algorithm Merge_Lists(list1, list2)
// 2) Pre: list1 and list2 are two sorted linked lists
// 3) Post: Returns a merged sorted linked list.
// 4) If list1 == NULL then
// 5)     Return list2
// 6) Else If list2 == NULL then
// 7)     Return list1
// 8) End If
// 9) If list1.data <= list2.data then
// 10)    result ← list1
// 11)    result.next ← Merge_Lists(list1.next, list2)
// 12) Else
// 13)    result ← list2
// 14)    result.next ← Merge_Lists(list1, list2.next)
// 15) End If
// 16) Return result
// 17) End Merge_Lists

#include <stdio.h>
#include <stdlib.h>

// Definition of a Node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to merge two sorted linked lists
struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    struct Node* result = NULL;

    // Base cases
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    // Recursively merge lists
    if (list1->data <= list2->data) {
        result = list1;
        result->next = mergeLists(list1->next, list2);
    } else {
        result = list2;
        result->next = mergeLists(list1, list2->next);
    }

    return result;
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Inserting data into list1
    insertNode(&list1, 1);
    insertNode(&list1, 3);
    insertNode(&list1, 5);

    // Inserting data into list2
    insertNode(&list2, 2);
    insertNode(&list2, 4);
    insertNode(&list2, 6);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    // Merging the two lists
    struct Node* mergedList = mergeLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}

