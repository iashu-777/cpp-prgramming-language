// 1) Algorithm enqueue(queue, value)
// 2) Pre: queue is a valid queue, value is the data to be inserted
// 3) Post: value is added to the queue
// 4) create a new node with value
// 5) set next of the new node to NULL
// 6) if queue is empty
// 7)     set front and rear to the new node
// 8) else
// 9)     set rear->next to the new node
// 10)     set rear to the new node
// 11) end if
// 12) end enqueue


// 1) Algorithm dequeue(queue)
// 2) Pre: queue is a valid queue
// 3) Post: Removes and returns the element from the front of the queue
// 4) if queue is empty
// 5)     print "Queue is empty"
// 6)     return -1
// 7) end if
// 8) value = front->data
// 9) set front to front->next
// 10) if front is NULL
// 11)     set rear to NULL
// 12) end if
// 13) free the old front node
// 14) return value
// 15) end dequeue


// 1) Algorithm display(queue)
// 2) Pre: queue is a valid queue
// 3) Post: Displays all the elements in the queue
// 4) if queue is empty
// 5)     print "Queue is empty"
// 6)     return
// 7) end if
// 8) set temp to front
// 9) while temp is not NULL
// 10)     print temp->data
// 11)     set temp to temp->next
// 12) end while
// 13) end display

#include <stdio.h>
#include <stdlib.h>

// Node structure for Linked List
struct Node {
    int data;
    struct Node* next;
};

// Queue structure using Linked List
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Initialize the queue
void initQueue(struct Queue* q) {
    q->front = q->rear = NULL;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == NULL;
}

// Add an element to the queue
void enqueue(struct Queue* q, int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

// Remove an element from the queue
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    struct Node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return value;
}

// Display the queue elements
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Queue q;
    initQueue(&q);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    
    printf("Queue elements: ");
    display(&q);
    
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Queue elements after dequeue: ");
    display(&q);
    
    return 0;
}
