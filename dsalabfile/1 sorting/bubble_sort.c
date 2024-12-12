// 1) Algorithm Bubble_sort(list, n)
// 2) Pre: list != ∅
// 3) Post: list has been sorted into values of ascending order
// 4) For i = 0 to n - 2 Do
// 5)     For j = 0 to n - i - 2 Do
// 6)         if (list[j + 1] < list[j])
// 7)             swap(list[j + 1], list[j])
// 8)         end if
// 9)     end For
// 10) end For
// 11) end Bubble_sort


#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");
    return 0;
}
