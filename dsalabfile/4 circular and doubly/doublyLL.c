// 1) Algorithm Insert_Beginning(head, data)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: A new node with data has been inserted at the beginning of the list.
// 4) new_node ← Create new node
// 5) new_node.data ← data
// 6) new_node.next ← head
// 7) If head != NULL then
// 8)     head.prev ← new_node
// 9) End If
// 10) head ← new_node
// 11) End Insert_Beginning

// 1) Algorithm Insert_End(head, data)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: A new node with data has been inserted at the end of the list.
// 4) new_node ← Create new node
// 5) new_node.data ← data
// 6) If head == NULL then
// 7)     head ← new_node
// 8)     new_node.prev ← NULL
// 9)     new_node.next ← NULL
// 10)     return
// 11) End If
// 12) last ← head
// 13) While last.next != NULL do
// 14)     last ← last.next
// 15) End While
// 16) last.next ← new_node
// 17) new_node.prev ← last
// 18) End Insert_End

// 1) Algorithm Insert_At_Position(head, data, position)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: A new node with data has been inserted at the specified position.
// 4) If position == 0 then
// 5)     Call Insert_Beginning(head, data)
// 6)     return
// 7) End If
// 8) current ← head
// 9) i ← 0
// 10) While i < position − 1 and current != NULL do
// 11)     current ← current.next
// 12)     i ← i + 1
// 13) End While
// 14) If current == NULL then
// 15)     Print "Position out of range"
// 16)     return
// 17) End If
// 18) new_node ← Create new node
// 19) new_node.data ← data
// 20) new_node.next ← current.next
// 21) If current.next != NULL then
// 22)     current.next.prev ← new_node
// 23) End If
// 24) current.next ← new_node
// 25) new_node.prev ← current
// 26) End Insert_At_Position

// 1) Algorithm Delete_Beginning(head)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: The first node has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) If head.next == NULL then
// 9)     head ← NULL
// 10)     Free node
// 11)     return
// 12) End If
// 13) head ← head.next
// 14) head.prev ← NULL
// 15) Free original first node
// 16) End Delete_Beginning

// 1) Algorithm Delete_End(head)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: The last node has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) last ← head
// 9) While last.next != NULL do
// 10)     last ← last.next
// 11) End While
// 12) If last.prev != NULL then
// 13)     last.prev.next ← NULL
// 14) End If
// 15) Free last node
// 16) End Delete_End

// 1) Algorithm Delete_At_Position_Doubly(head, position)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: The node at the specified position has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) If position == 0 then
// 9)     Call Delete_Beginning_Doubly(head)
// 10)     return
// 11) End If
// 12) current ← head
// 13) i ← 0
// 14) While i < position and current != NULL do
// 15)     current ← current.next
// 16)     i ← i + 1
// 17) End While
// 18) If current == NULL then
// 19)     Print "Position out of range"
// 20)     return
// 21) End If
// 22) If current.prev != NULL then
// 23)     current.prev.next ← current.next
// 24) End If
// 25) If current.next != NULL then
// 26)     current.next.prev ← current.prev
// 27) End If
// 28) If current == head then
// 29)     head ← current.next
// 30) End If
// 31) Free current
// 32) End Delete_At_Position_Doubly


// 1) Algorithm Traversal(head)
// 2) Pre: head != NULL (head points to the first node of the doubly linked list)
// 3) Post: Prints the data of each node in the doubly linked list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) current ← head
// 9) While current != NULL do
// 10)     Print current.data
// 11)     current ← current.next
// 12) End While
// 13) End Traversal

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to insert a node at the beginning
void Insert_Beginning(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    *head = new_node;
}

// Function to insert a node at the end
void Insert_End(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

// Function to insert a node at a specific position
void Insert_At_Position(struct Node** head, int data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    new_node->data = data;

    if (position == 0) {
        Insert_Beginning(head, data);
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    new_node->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = new_node;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

// Function to delete a node at the beginning
void Delete_Beginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL) {
        (*head)->prev = NULL;
    }

    free(temp);
}

// Function to delete a node at the end
void Delete_End(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    }

    free(temp);
}

// Function to delete a node at a specific position
void Delete_At_Position(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 0) {
        Delete_Beginning(head);
        return;
    }

    for (int i = 0; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Function to traverse the list (in-order)
void Traversal(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    Insert_Beginning(&head, 10);
    Insert_End(&head, 20);
    Insert_End(&head, 30);
    Insert_At_Position(&head, 25, 2);

    printf("Doubly Linked List after insertion:\n");
    Traversal(head);

    Delete_Beginning(&head);
    Delete_End(&head);
    Delete_At_Position(&head, 1);

    printf("Doubly Linked List after deletion:\n");
    Traversal(head);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}

