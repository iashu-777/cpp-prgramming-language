// Algorithm
// 1) Algorithm Partition(A, left, right)
// 2) P = A[left];
// 3) k = right;
// 4) for i=right to i>left do
// 5) if (arr[i] > pivot)
// 6) swap(A[i], A[k])
// 7) k--;
// 8) end if
// 9) end for
// 10) swap (arr[k],arr[left])
// 11) return k
// 12) End Partition

// 1)Algorithm quicksort(A, left, right)
// 2) if (right > left )
// 3) q = partition(A, left, right);
// // // after ‘partition’ A[left..q-1] ≤A[q] ≤ A[q+1..right]
// 4) quicksort(A, left, q-1);
// 5) quicksort(A, q+1, right);
// 6) End quicksort


#include <stdio.h>

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Swap arr[i + 1] and pivot (arr[high])
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
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
