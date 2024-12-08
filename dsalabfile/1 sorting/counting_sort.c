// 1) Algorithm Counting_Sort(list, n)
// 2) Pre: list != ∅ and all elements in list are non-negative integers
// 3) Post: list has been sorted into values of ascending order
// 4) Initialize max to the maximum value in list.
// 5) Create a count array of size max+1 and initialize all elements to 0.
// 6) For i = 0 to n-1 Do
// 7)     Increment count[list[i]] by 1.
// 8) End For
// 9) Initialize index to 0.
// 10) For i = 0 to max Do
// 11)     While count[i] > 0 Do
// 12)         list[index] = i
// 13)         Increment index by 1.
// 14)         Decrement count[i] by 1.
// 15)     End While
// 16) End For
// 17) End Counting_Sort

#include <stdio.h>
#include <string.h> // For memset

// Function to perform counting sort
void countingSort(int arr[], int n) {
    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create a count array and initialize it to 0
    int count[max + 1];
    memset(count, 0, sizeof(count));

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Update the original array based on the count array
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
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
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    countingSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
