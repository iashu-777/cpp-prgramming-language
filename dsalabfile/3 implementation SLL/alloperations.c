// 1) Algorithm Insert_Beginning(head, data)
// 2) Pre: head != NULL (the linked list may be empty)
// 3) Post: A new node with data has been inserted at the beginning
// 4) Create a new node with the given data
// 5) Set the next pointer of the new node to head
// 6) Set head to the new node

// 1) Algorithm Insert_End(head, data)
// 2) Pre: head != NULL
// 3) Post: A new node with data has been inserted at the end
// 4) Create a new node with the given data
// 5) Traverse the list to the last node
// 6) Set the next pointer of the last node to the new node

// 1) Algorithm Insert_At_Position(head, data, position)
// 2) Pre: head != NULL, position is a valid index
// 3) Post: A new node with data has been inserted at the specified position
// 4) Traverse the list to the node just before the specified position
// 5) Create a new node with the given data
// 6) Set the next pointer of the new node to the next pointer of the previous node
// 7) Set the next pointer of the previous node to the new node

// 1) Algorithm Delete_Beginning(head)
// 2) Pre: head != NULL
// 3) Post: The node at the beginning has been deleted
// 4) Set the head pointer to the next node
// 5) Free the memory of the old head node

// 1) Algorithm Delete_End(head)
// 2) Pre: head != NULL
// 3) Post: The last node has been deleted
// 4) Traverse the list to the second last node
// 5) Set the next pointer of the second last node to NULL
// 6) Free the memory of the last node

// 1) Algorithm Delete_At_Position(head, position)
// 2) Pre: head != NULL, position is a valid index
// 3) Post: The node at the specified position has been deleted
// 4) Traverse the list to the node just before the specified position
// 5) Set the next pointer of the previous node to the next pointer of the current node
// 6) Free the memory of the current node

// 1) Algorithm Traversal(head)
// 2) Pre: head != NULL
// 3) Post: All nodes have been printed
// 4) Traverse the list from head to end
// 5) Print the data of each node

// 1) Algorithm Reverse_Traversal(head)
// 2) Pre: head != NULL
// 3) Post: All nodes have been printed in reverse order
// 4) If head != NULL, recursively call Reverse_Traversal(head->next)
// 5) Print the data of head

// 1) Algorithm Search(head, data)
// 2) Pre: head != NULL
// 3) Post: Return the index of the node containing data, or -1 if not found
// 4) Traverse the list from head to end
// 5) If a node contains the given data, return its index
// 6) If data is not found, return -1

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning
void Insert_Beginning(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// Function to insert a node at the end
void Insert_End(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}

// Function to insert a node at a specific position
void Insert_At_Position(struct Node** head, int data, int position) {
    if (position == 0) {
        Insert_Beginning(head, data);
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    struct Node* temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Function to delete a node at the beginning
void Delete_Beginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to delete a node at the end
void Delete_End(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL && temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

// Function to delete a node at a specific position
void Delete_At_Position(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (position == 0) {
        Delete_Beginning(head);
        return;
    }

    struct Node* temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range.\n");
        return;
    }

    struct Node* node_to_delete = temp->next;
    temp->next = temp->next->next;
    free(node_to_delete);
}

// Function to traverse the list (in-order)
void Traversal(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to traverse the list in reverse order (using recursion)
void Reverse_Traversal(struct Node* head) {
    if (head == NULL) {
        return;
    }
    Reverse_Traversal(head->next);
    printf("%d ", head->data);
}

// Function to search for a data in the list
int Search(struct Node* head, int data) {
    struct Node* temp = head;
    int index = 0;
    while (temp != NULL) {
        if (temp->data == data) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;

    // Inserting nodes
    Insert_Beginning(&head, 10);
    Insert_End(&head, 20);
    Insert_End(&head, 30);
    Insert_At_Position(&head, 25, 2);

    printf("List after insertion:\n");
    Traversal(head);

    // Deleting nodes
    Delete_Beginning(&head);
    Delete_End(&head);
    Delete_At_Position(&head, 1);

    printf("List after deletion:\n");
    Traversal(head);

    // Searching for an element
    int index = Search(head, 20);
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found.\n");

    // Reverse traversal
    printf("Reverse traversal:\n");
    Reverse_Traversal(head);
    printf("\n");
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
