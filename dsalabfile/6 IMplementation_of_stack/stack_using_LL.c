// 1) Algorithm Stack_Using_Linked_List(top)
// 2) Pre: top != ∅
// 3) Post: Stack operations (push, pop, peek, display) are implemented using a linked list.
// 4) Push(value):
//     a) new_node ← createNode(value)
//     b) new_node.next ← top
//     c) top ← new_node
// 5) Pop():
//     a) if top is not NULL
//     b)     value ← top.data
//     c)     top ← top.next
//     d)     return value
// 6) Peek():
//     a) if top is not NULL
//     b)     return top.data
// 7) Display():
//     a) if top is not NULL
//     b)     current ← top
//     c)     while current is not NULL
//     d)         print current.data
//     e)         current ← current.next
// 8) End Stack_Using_Linked_List


#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
void push(struct Node** top, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d\n", value);
}

// Function to pop an element from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

// Function to peek at the top element of the stack
int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return -1;
    }
    return top->data;
}

// Function to display the elements of the stack
void display(struct Node* top) {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements: ");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);

    display(top);

    printf("Popped: %d\n", pop(&top));
    display(top);

    printf("Peek: %d\n", peek(top));
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
