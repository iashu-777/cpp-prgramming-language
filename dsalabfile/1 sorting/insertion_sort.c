// 1) Algorithm Insertion_sort(list, size)
// 2) Pre: list != ∅
// 3) Post: list has been sorted into values of ascending order
// 4) unsorted ← 1
// 5) while unsorted < list_size
// 6) hold ← list[unsorted]
// 7) i ← unsorted − 1
// 8) while i ≥ 0 and hold < list[i]
// 9) list[i + 1] ← list[i]
// 10) I i ← i − 1
// 11) end while
// 12) list[i + 1] ← hold
// 13) unsorted ← unsorted + 1
// 14) end while
// 15) return list
// 16) end Insertion_sort

#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements that are greater than key
        // one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
