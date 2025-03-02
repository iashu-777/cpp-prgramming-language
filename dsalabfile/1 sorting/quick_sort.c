// 1) Algorithm Partition(A, left, right)
// 2) P = A[left]
// 3) k = right
// 4) For i = right to i > left Do
// 5)     if (A[i] > P) then
// 6)         swap(A[i], A[k])
// 7)         k = k - 1
// 8)     end if
// 9) End For
// 10) swap(A[k], A[left])
// 11) return k
// 12) End Partition


// 1) Algorithm quicksort(A, left, right)
// 2) if (right > left) then
// 3)     q = Partition(A, left, right)
//        // after ‘Partition’ A[left..q-1] ≤ A[q] ≤ A[q+1..right]
// 4)     quicksort(A, left, q - 1)
// 5)     quicksort(A, q + 1, right)
// 6) End quicksort



#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // First element as pivot
    int start = low + 1;   // Start pointer
    int end = high;        // End pointer

    while (start <= end) {
        // Move start forward if arr[start] is less than pivot
        while (start <= end && arr[start] <= pivot) {
            start++;
        }
        // Move end backward if arr[end] is greater than pivot
        while (start <= end && arr[end] > pivot) {
            end--;
        }

        // Swap elements if start is still smaller than end
        if (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    // Swap pivot (arr[low]) with arr[end] to put it in the correct position
    int temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;

    return end;  // Return partition index
}
 
// Function to implement quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the partition index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
