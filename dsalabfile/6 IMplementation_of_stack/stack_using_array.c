// 1) Algorithm Stack_Using_Array(stack, MAX)
// 2) Pre: stack != ∅
// 3) Post: Stack operations (push, pop, peek, display) are implemented using an array.
// 4) top ← -1
// 5) if stack is full
// 6)     return Stack Overflow
// 7) end if
// 8) if stack is empty
// 9)     return Stack Underflow
// 10) end if
// 11) Push(value):
//     a) if stack is not full
//     b)     top ← top + 1
//     c)     stack[top] ← value
// 12) Pop():
//     a) if stack is not empty
//     b)     value ← stack[top]
//     c)     top ← top - 1
//     d)     return value
// 13) Peek():
//     a) if stack is not empty
//     b)     return stack[top]
// 14) Display():
//     a) if stack is not empty
//     b)     for i ← 0 to top
//     c)         print stack[i]
// 15) End Stack_Using_Array

#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the stack

// Define the stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;  // Stack is initially empty
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;  // Return -1 if the stack is empty
    }
    return stack->arr[stack->top--];
}

// Function to peek at the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}

// Function to display the elements of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    push(&stack, 60); // This should show "Stack Overflow"

    display(&stack);

    printf("Popped: %d\n", pop(&stack));
    display(&stack);

    printf("Peek: %d\n", peek(&stack));
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
