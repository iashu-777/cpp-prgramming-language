// 1) Algorithm Inorder_Iterative(root)
// 2) Create an empty stack
// 3) Set current = root
// 4) While current is not NULL or stack is not empty
// 5)    While current is not NULL
// 6)        Push current onto stack
// 7)        current = current->left
// 8)    Pop from stack and print node
// 9)    Set current = current->right
// 10) End Inorder_Iterative

// 1) Algorithm Preorder_Iterative(root)
// 2) Create an empty stack
// 3) Push root onto stack
// 4) While stack is not empty
// 5)    Pop node from stack and print
// 6)    Push right child (if exists)
// 7)    Push left child (if exists)
// 8) End Preorder_Iterative

// 1) Algorithm Postorder_Iterative(root)
// 2) Create two empty stacks (stack1, stack2)
// 3) Push root onto stack1
// 4) While stack1 is not empty
// 5)    Pop node from stack1 and push it onto stack2
// 6)    Push left child (if exists) onto stack1
// 7)    Push right child (if exists) onto stack1
// 8) While stack2 is not empty
// 9)    Pop and print node
// 10) End Postorder_Iterative


// 1) Algorithm LevelOrder_Iterative(root)
// 2) Create an empty queue
// 3) Enqueue root onto queue
// 4) While queue is not empty
// 5)    Dequeue node from queue and print
// 6)    Enqueue left child (if exists)
// 7)    Enqueue right child (if exists)
// 8) End LevelOrder_Iterative



#include <stdio.h>
#include <stdlib.h>

// Structure for a BST Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Structure for Stack (Used in Iterative Traversals)
struct Stack {
    struct Node* node;
    struct Stack* next;
};

// Structure for Queue (Used in Level Order Traversal)
struct Queue {
    struct Node* node;
    struct Queue* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

// *** Stack Functions for Iterative Traversals ***
void push(struct Stack** top, struct Node* node) {
    struct Stack* newStack = (struct Stack*)malloc(sizeof(struct Stack));
    newStack->node = node;
    newStack->next = *top;
    *top = newStack;
}

struct Node* pop(struct Stack** top) {
    if (*top == NULL) return NULL;
    struct Stack* temp = *top;
    struct Node* node = temp->node;
    *top = (*top)->next;
    free(temp);
    return node;
}

int isStackEmpty(struct Stack* top) {
    return top == NULL;
}

// *** Queue Functions for Level Order Traversal ***
void enqueue(struct Queue** front, struct Queue** rear, struct Node* node) {
    struct Queue* newQueue = (struct Queue*)malloc(sizeof(struct Queue));
    newQueue->node = node;
    newQueue->next = NULL;
    if (*rear == NULL) {
        *front = *rear = newQueue;
    } else {
        (*rear)->next = newQueue;
        *rear = newQueue;
    }
}

struct Node* dequeue(struct Queue** front, struct Queue** rear) {
    if (*front == NULL) return NULL;
    struct Queue* temp = *front;
    struct Node* node = temp->node;
    *front = (*front)->next;
    if (*front == NULL) *rear = NULL;
    free(temp);
    return node;
}

int isQueueEmpty(struct Queue* front) {
    return front == NULL;
}

// *** Iterative Inorder Traversal ***
void inorderIterative(struct Node* root) {
    struct Stack* stack = NULL;
    struct Node* current = root;
    
    while (current != NULL || !isStackEmpty(stack)) {
        while (current != NULL) {
            push(&stack, current);
            current = current->left;
        }
        current = pop(&stack);
        printf("%d ", current->data);
        current = current->right;
    }
}

// *** Iterative Preorder Traversal ***
void preorderIterative(struct Node* root) {
    if (root == NULL) return;

    struct Stack* stack = NULL;
    push(&stack, root);

    while (!isStackEmpty(stack)) {
        struct Node* current = pop(&stack);
        printf("%d ", current->data);
        if (current->right) push(&stack, current->right);
        if (current->left) push(&stack, current->left);
    }
}

// *** Iterative Postorder Traversal ***
void postorderIterative(struct Node* root) {
    if (root == NULL) return;

    struct Stack* stack1 = NULL;
    struct Stack* stack2 = NULL;

    push(&stack1, root);
    
    while (!isStackEmpty(stack1)) {
        struct Node* current = pop(&stack1);
        push(&stack2, current);
        if (current->left) push(&stack1, current->left);
        if (current->right) push(&stack1, current->right);
    }

    while (!isStackEmpty(stack2)) {
        printf("%d ", pop(&stack2)->data);
    }
}

// *** Iterative Level Order Traversal ***
void levelOrderIterative(struct Node* root) {
    if (root == NULL) return;

    struct Queue* front = NULL;
    struct Queue* rear = NULL;

    enqueue(&front, &rear, root);
    
    while (!isQueueEmpty(front)) {
        struct Node* current = dequeue(&front, &rear);
        printf("%d ", current->data);
        if (current->left) enqueue(&front, &rear, current->left);
        if (current->right) enqueue(&front, &rear, current->right);
    }
}

// *** Driver Code ***
int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder Traversal (Iterative): ");
    inorderIterative(root);
    printf("\n");

    printf("Preorder Traversal (Iterative): ");
    preorderIterative(root);
    printf("\n");

    printf("Postorder Traversal (Iterative): ");
    postorderIterative(root);
    printf("\n");

    printf("Level Order Traversal (Iterative): ");
    levelOrderIterative(root);
    printf("\n");

    return 0;
}
