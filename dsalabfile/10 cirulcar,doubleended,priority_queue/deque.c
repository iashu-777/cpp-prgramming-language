// 1) Algorithm insertFront(deque, value)
// 2) Pre: deque is a valid deque, value is the data to be inserted at the front
// 3) Post: value is added to the front of the deque
// 4) if deque is full
// 5)     print "Deque is full"
// 6)     return
// 7) end if
// 8) if deque is empty
// 9)     set front and rear to 0
// 10) else if front is 0
// 11)     set front to MAX - 1
// 12) else
// 13)     decrement front
// 14) end if
// 15) add value to deque[front]
// 16) end insertFront


// 1) Algorithm insertRear(deque, value)
// 2) Pre: deque is a valid deque, value is the data to be inserted at the rear
// 3) Post: value is added to the rear of the deque
// 4) if deque is full
// 5)     print "Deque is full"
// 6)     return
// 7) end if
// 8) if deque is empty
// 9)     set front and rear to 0
// 10) else if rear is MAX - 1
// 11)     set rear to 0
// 12) else
// 13)     increment rear
// 14) end if
// 15) add value to deque[rear]
// 16) end insertRear


// 1) Algorithm deleteFront(deque)
// 2) Pre: deque is a valid deque
// 3) Post: Removes and returns the element from the front of the deque
// 4) if deque is empty
// 5)     print "Deque is empty"
// 6)     return -1
// 7) end if
// 8) value = deque[front]
// 9) if front equals rear
// 10)     set front and rear to -1
// 11) else if front equals MAX - 1
// 12)     set front to 0
// 13) else
// 14)     increment front
// 15) end if
// 16) return value
// 17) end deleteFront


// 1) Algorithm deleteRear(deque)
// 2) Pre: deque is a valid deque
// 3) Post: Removes and returns the element from the rear of the deque
// 4) if deque is empty
// 5)     print "Deque is empty"
// 6)     return -1
// 7) end if
// 8) value = deque[rear]
// 9) if front equals rear
// 10)     set front and rear to -1
// 11) else if rear equals 0
// 12)     set rear to MAX - 1
// 13) else
// 14)     decrement rear
// 15) end if
// 16) return value
// 17) end deleteRear


// 1) Algorithm display(deque)
// 2) Pre: deque is a valid deque
// 3) Post: Displays all the elements in the deque
// 4) if deque is empty
// 5)     print "Deque is empty"
// 6)     return
// 7) end if
// 8) set i to front
// 9) while i != rear
// 10)     print deque[i]
// 11)     set i to (i + 1) % MAX
// 12) end while
// 13) print deque[rear]
// 14) end display

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Double Ended Queue structure
struct Deque {
    int front, rear;
    int arr[MAX];
};

// Initialize the deque
void initDeque(struct Deque* dq) {
    dq->front = dq->rear = -1;
}

// Check if the deque is full
int isFull(struct Deque* dq) {
    return (dq->front == 0 && dq->rear == MAX - 1) || (dq->rear == dq->front - 1);
}

// Check if the deque is empty
int isEmpty(struct Deque* dq) {
    return dq->front == -1;
}

// Add an element to the front of the deque
void insertFront(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full\n");
        return;
    }
    if (dq->front == -1) {
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX - 1;
    } else {
        dq->front--;
    }
    dq->arr[dq->front] = value;
}

// Add an element to the rear of the deque
void insertRear(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Deque is full\n");
        return;
    }
    if (dq->rear == -1) {
        dq->front = dq->rear = 0;
    } else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } else {
        dq->rear++;
    }
    dq->arr[dq->rear] = value;
}

// Remove an element from the front of the deque
int deleteFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return -1;
    }
    int value = dq->arr[dq->front];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->front == MAX - 1) {
        dq->front = 0;
    } else {
        dq->front++;
    }
    return value;
}

// Remove an element from the rear of the deque
int deleteRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return -1;
    }
    int value = dq->arr[dq->rear];
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } else {
        dq->rear--;
    }
    return value;
}

// Display the deque elements
void display(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return;
    }
    int i = dq->front;
    while (i != dq->rear) {
        printf("%d ", dq->arr[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", dq->arr[dq->rear]);
}

int main() {
    struct Deque dq;
    initDeque(&dq);
    
    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    
    printf("Deque elements: ");
    display(&dq);
    
    printf("Deleted from front: %d\n", deleteFront(&dq));
    printf("Deleted from rear: %d\n", deleteRear(&dq));
    printf("Deque elements after deletions: ");
    display(&dq);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");
    
    return 0;
}
