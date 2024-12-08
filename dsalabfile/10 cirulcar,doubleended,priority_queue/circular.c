// 1) Algorithm enqueue(queue, value)
// 2) Pre: queue is a valid queue, value is the data to be inserted
// 3) Post: value is added to the queue
// 4) if queue is full
// 5)     print "Queue is full"
// 6)     return
// 7) end if
// 8) if queue is empty
// 9)     set front to 0
// 10) end if
// 11) set rear to (rear + 1) % MAX
// 12) add value to queue[rear]
// 13) end enqueue


// 1) Algorithm dequeue(queue)
// 2) Pre: queue is a valid queue
// 3) Post: Removes and returns the element from the front of the queue
// 4) if queue is empty
// 5)     print "Queue is empty"
// 6)     return -1
// 7) end if
// 8) value = queue[front]
// 9) if front equals rear
// 10)     set front and rear to -1
// 11) else
// 12)     set front to (front + 1) % MAX
// 13) end if
// 14) return value
// 15) end dequeue


// 1) Algorithm display(queue)
// 2) Pre: queue is a valid queue
// 3) Post: Displays all the elements in the queue
// 4) if queue is empty
// 5)     print "Queue is empty"
// 6)     return
// 7) end if
// 8) set i to front
// 9) while i != rear
// 10)     print queue[i]
// 11)     set i to (i + 1) % MAX
// 12) end while
// 13) print queue[rear]
// 14) end display


#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Circular Queue structure
struct Queue {
    int front, rear;
    int arr[MAX];
};

// Initialize the queue
void initQueue(struct Queue* q) {
    q->front = q->rear = -1;
}

// Check if the queue is full
int isFull(struct Queue* q) {
    return (q->rear + 1) % MAX == q->front;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1;
}

// Add an element to the queue
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0;  // If the queue is empty
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = value;
}

// Remove an element from the queue
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;  // Queue becomes empty
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return value;
}

// Display the queue elements
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->arr[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", q->arr[q->rear]);
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
