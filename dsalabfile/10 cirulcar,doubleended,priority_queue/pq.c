// 1) Algorithm insert(priorityQueue, value)
// 2) Pre: priorityQueue is a valid priority queue, value is the data to be inserted
// 3) Post: value is added to the priority queue, maintaining the order
// 4) if priorityQueue is full
// 5)     print "Priority queue is full"
// 6)     return
// 7) end if
// 8) add value at the end of the queue
// 9) bubble-up: compare with parent and swap if necessary
// 10) end insert


// 1) Algorithm removeMax(priorityQueue)
// 2) Pre: priorityQueue is a valid priority queue
// 3) Post: Removes and returns the highest priority element (max)
// 4) if priorityQueue is empty
// 5)     print "Priority queue is empty"
// 6)     return -1
// 7) end if
// 8) store the max value at root
// 9) replace root with last element
// 10) bubble-down: swap with largest child if necessary
// 11) return max
// 12) end removeMax


// 1) Algorithm display(priorityQueue)
// 2) Pre: priorityQueue is a valid priority queue
// 3) Post: Displays all the elements in the priority queue
// 4) if priorityQueue is empty
// 5)     print "Priority queue is empty"
// 6)     return
// 7) end if
// 8) print all elements from root to leaf in priority order
// 9) end display

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Priority Queue structure
struct PriorityQueue {
    int arr[MAX];
    int size;
};

// Initialize the priority queue
void initPriorityQueue(struct PriorityQueue* pq) {
    pq->size = 0;
}

// Check if the priority queue is full
int isFull(struct PriorityQueue* pq) {
    return pq->size == MAX;
}

// Check if the priority queue is empty
int isEmpty(struct PriorityQueue* pq) {
    return pq->size == 0;
}

// Insert an element in priority queue
void insert(struct PriorityQueue* pq, int value) {
    if (isFull(pq)) {
        printf("Priority queue is full\n");
        return;
    }
    int i = pq->size;
    pq->arr[i] = value;
    pq->size++;
    
    // Bubble-up to maintain the priority order (highest priority at the front)
    while (i > 0 && pq->arr[i] > pq->arr[(i - 1) / 2]) {
        int temp = pq->arr[i];
        pq->arr[i] = pq->arr[(i - 1) / 2];
        pq->arr[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

// Remove the highest priority element (root)
int removeMax(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority queue is empty\n");
        return -1;
    }
    
    int max = pq->arr[0];
    pq->size--;
    pq->arr[0] = pq->arr[pq->size];
    
    // Bubble-down to maintain the priority order
    int i = 0;
    while (i * 2 + 1 < pq->size) {
        int left = i * 2 + 1;
        int right = i * 2 + 2;
        int largest = i;
        
        if (left < pq->size && pq->arr[left] > pq->arr[largest]) {
            largest = left;
        }
        if (right < pq->size && pq->arr[right] > pq->arr[largest]) {
            largest = right;
        }
        
        if (largest == i) {
            break;
        }
        
        int temp = pq->arr[i];
        pq->arr[i] = pq->arr[largest];
        pq->arr[largest] = temp;
        i = largest;
    }
    
    return max;
}

// Display the priority queue elements
void display(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority queue is empty\n");
        return;
    }
    for (int i = 0; i < pq->size; i++) {
        printf("%d ", pq->arr[i]);
    }
    printf("\n");
}

int main() {
    struct PriorityQueue pq;
    initPriorityQueue(&pq);
    
    insert(&pq, 10);
    insert(&pq, 20);
    insert(&pq, 15);
    
    printf("Priority Queue elements: ");
    display(&pq);
    
    printf("Removed max: %d\n", removeMax(&pq));
    printf("Priority Queue elements after removal: ");
    display(&pq);
    
    return 0;
}
