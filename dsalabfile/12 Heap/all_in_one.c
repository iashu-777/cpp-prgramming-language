// 1) Algorithm Build_Max_Heap(arr, n)
// 2) Pre: arr is an array of n elements, n is the size of the array
// 3) Post: arr is transformed into a max-heap
// 4) for i ← n / 2 - 1 down to 0 do
// 5)     heapify(arr, n, i)
// 6) end for
// 7) return arr
// 8) end Build_Max_Heap

// 1) Algorithm Heapify(arr, n, i)
// 2) Pre: arr is an array of n elements, i is the index of the current node
// 3) Post: arr is heapified at index i
// 4) largest ← i
// 5) left ← 2 * i + 1
// 6) right ← 2 * i + 2
// 7) if left < n and arr[left] > arr[largest] then
// 8)     largest ← left
// 9) end if
// 10) if right < n and arr[right] > arr[largest] then
// 11)     largest ← right
// 12) end if
// 13) if largest ≠ i then
// 14)     swap arr[i] with arr[largest]
// 15)     Heapify(arr, n, largest)
// 16) end if
// 17) end Heapify

// 1) Algorithm Heap_Sort(arr, n)
// 2) Pre: arr is an array of n elements
// 3) Post: arr is sorted in ascending order using heap sort
// 4) Build_Max_Heap(arr, n)
// 5) for i ← n - 1 down to 1 do
// 6)     swap arr[0] with arr[i]
// 7)     Heapify(arr, i, 0)
// 8) end for
// 9) return arr
// 10) end Heap_Sort

// 1) Algorithm Insert_Element(arr, n, value)
// 2) Pre: arr is an array of n elements, value is the element to be inserted
// 3) Post: value is inserted into the heap, and the heap property is maintained
// 4) n ← n + 1
// 5) arr[n - 1] ← value
// 6) i ← n - 1
// 7) while i > 0 and arr[(i - 1) / 2] < arr[i] do
// 8)     swap arr[i] with arr[(i - 1) / 2]
// 9)     i ← (i - 1) / 2
// 10) end while
// 11) return arr
// 12) end Insert_Element

// 1) Algorithm Delete_Element(arr, n)
// 2) Pre: arr is an array of n elements
// 3) Post: The root element is removed, and the heap property is maintained
// 4) if n ≤ 0 then
// 5)     return "Heap is empty"
// 6) end if
// 7) arr[0] ← arr[n - 1]
// 8) n ← n - 1
// 9) Heapify(arr, n, 0)
// 10) return arr
// 11) end Delete_Element

#include <stdio.h>

// Function to heapify a subtree rooted at index i
void heapify(int arr[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Build a max-heap
void buildMaxHeap(int arr[], int n) {
    // Start from the last non-leaf node and heapify each node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Function to perform heap sort
void heapSort(int arr[], int n) {
    // Build a max-heap
    buildMaxHeap(arr, n);

    // One by one extract elements
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to insert an element into the heap
void insertElement(int arr[], int* n, int value) {
    (*n)++;
    arr[*n - 1] = value;
    
    // Reheap up to maintain heap property
    int i = *n - 1;
    while (i > 0 && arr[(i - 1) / 2] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[(i - 1) / 2];
        arr[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

// Function to delete an element from the heap
void deleteElement(int arr[], int* n) {
    if (*n <= 0) {
        printf("Heap is empty\n");
        return;
    }
    
    arr[0] = arr[*n - 1];
    (*n)--;
    
    // Reheap down to maintain heap property
    heapify(arr, *n, 0);
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    heapSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Inserting a new element
    insertElement(arr, &n, 15);
    printf("After inserting 15: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deleting the root element
    deleteElement(arr, &n);
    printf("After deleting the root: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
