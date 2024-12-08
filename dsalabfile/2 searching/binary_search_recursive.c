// 1) Algorithm Binary_Search(arr, low, high, target)
// 2) Pre: arr != ∅, arr is sorted, low and high are valid indices, target is the element to be searched
// 3) Post: If target is found in arr, return its index; otherwise, return -1
// 4) If low > high Then
// 5)     Return -1
// 6) End If
// 7) Set mid = (low + high) / 2
// 8) If arr[mid] == target Then
// 9)     Return mid
// 10) Else If arr[mid] < target Then
// 11)     Return Binary_Search(arr, mid + 1, high, target) // Search in the right half
// 12) Else
// 13)     Return Binary_Search(arr, low, mid - 1, target) // Search in the left half
// 14) End If
// 15) End Binary_Search

#include <stdio.h>

// Recursive function to perform binary search
int Binary_Search(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = (low + high) / 2;

    // Check if target is present at mid
    if (arr[mid] == target) {
        return mid; // Return index if element is found
    }
    // If target is greater, search the right half
    else if (arr[mid] < target) {
        return Binary_Search(arr, mid + 1, high, target);
    }
    // If target is smaller, search the left half
    else {
        return Binary_Search(arr, low, mid - 1, target);
    }
}

int main() {
    int n;

    // Taking user input for size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking user input for the array elements
    printf("Enter the elements of the array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    // Taking user input for the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Perform binary search (starting with full array range)
    int result = Binary_Search(arr, 0, n - 1, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
