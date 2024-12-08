// 1) Algorithm Insert_Beginning(head, data)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: A new node with data has been inserted at the beginning of the list.
// 4) new_node ← Create new node
// 5) new_node.data ← data
// 6) If head == NULL then
// 7)     new_node.next ← new_node
// 8)     head ← new_node
// 9)     return
// 10) End If
// 11) last ← head
// 12) While last.next != head do
// 13)     last ← last.next
// 14) End While
// 15) last.next ← new_node
// 16) new_node.next ← head
// 17) head ← new_node
// 18) End Insert_Beginning

// 1) Algorithm Insert_End(head, data)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: A new node with data has been inserted at the end of the list.
// 4) new_node ← Create new node
// 5) new_node.data ← data
// 6) If head == NULL then
// 7)     new_node.next ← new_node
// 8)     head ← new_node
// 9)     return
// 10) End If
// 11) last ← head
// 12) While last.next != head do
// 13)     last ← last.next
// 14) End While
// 15) last.next ← new_node
// 16) new_node.next ← head
// 17) End Insert_End

// 1) Algorithm Insert_At_Position(head, data, position)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: A new node with data has been inserted at the specified position.
// 4) If position == 0 then
// 5)     Call Insert_Beginning(head, data)
// 6)     return
// 7) End If
// 8) current ← head
// 9) i ← 0
// 10) While i < position − 1 and current.next != head do
// 11)     current ← current.next
// 12)     i ← i + 1
// 13) End While
// 14) If current.next == head then
// 15)     Print "Position out of range"
// 16)     return
// 17) End If
// 18) new_node ← Create new node
// 19) new_node.data ← data
// 20) new_node.next ← current.next
// 21) current.next ← new_node
// 22) End Insert_At_Position

// 1) Algorithm Delete_Beginning(head)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: The first node has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) If head.next == head then
// 9)     head ← NULL
// 10)     Free node
// 11)     return
// 12) End If
// 13) last ← head
// 14) While last.next != head do
// 15)     last ← last.next
// 16) End While
// 17) last.next ← head.next
// 18) head ← head.next
// 19) Free node
// 20) End Delete_Beginning

// 1) Algorithm Delete_End(head)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: The last node has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) If head.next == head then
// 9)     head ← NULL
// 10)     Free node
// 11)     return
// 12) End If
// 13) second_last ← head
// 14) While second_last.next.next != head do
// 15)     second_last ← second_last.next
// 16) End While
// 17) second_last.next ← head
// 18) Free last node
// 19) End Delete_End

// 1) Algorithm Delete_At_Position_Circular(head, position)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: The node at the specified position has been deleted from the list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) If position == 0 then
// 9)     Call Delete_Beginning_Circular(head)
// 10)     return
// 11) End If
// 12) current ← head
// 13) i ← 0
// 14) While i < position − 1 and current.next != head do
// 15)     current ← current.next
// 16)     i ← i + 1
// 17) End While
// 18) If current.next == head then
// 19)     Print "Position out of range"
// 20)     return
// 21) End If
// 22) node_to_delete ← current.next
// 23) current.next ← current.next.next
// 24) Free node_to_delete
// 25) End Delete_At_Position_Circular


// 1) Algorithm Traversal(head)
// 2) Pre: head != NULL (head points to the first node of the circular linked list)
// 3) Post: Prints the data of each node in the circular linked list.
// 4) If head == NULL then
// 5)     Print "List is empty"
// 6)     return
// 7) End If
// 8) current ← head
// 9) Repeat
// 10)     Print current.data
// 11)     current ← current.next
// 12) Until current == head
// 13) End Traversal

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning
void Insert_Beginning(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    if (*head == NULL) {
        new_node->next = new_node;
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    new_node->next = *head;
    last->next = new_node;
    *head = new_node;
}

// Function to insert a node at the end
void Insert_End(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    struct Node* last = *head;

    if (*head == NULL) {
        new_node->next = new_node;
        *head = new_node;
        return;
    }

    while (last->next != *head) {
        last = last->next;
    }

    new_node->next = *head;
    last->next = new_node;
}

// Function to insert a node at a specific position
void Insert_At_Position(struct Node** head, int data, int position) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    struct Node* temp = *head;
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
    temp->next = new_node;
}

// Function to delete a node at the beginning
void Delete_Beginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }

    struct Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    last->next = temp->next;
    *head = temp->next;
    free(temp);
}

// Function to delete a node at the end
void Delete_End(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }

    struct Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    struct Node* second_last = *head;
    while (second_last->next != last) {
        second_last = second_last->next;
    }

    second_last->next = *head;
    free(last);
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
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    Insert_Beginning(&head, 10);
    Insert_End(&head, 20);
    Insert_End(&head, 30);
    Insert_At_Position(&head, 25, 2);

    printf("Circular List after insertion:\n");
    Traversal(head);

    Delete_Beginning(&head);
    Delete_End(&head);
    Delete_At_Position(&head, 1);

    printf("Circular List after deletion:\n");
    Traversal(head);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
