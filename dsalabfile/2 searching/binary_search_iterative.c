// 1) Algorithm Binary_Search(arr, n, target)
// 2) Pre: arr != ∅, arr is sorted, n is the size of arr, target is the element to be searched
// 3) Post: If target is found in arr, return its index; otherwise, return -1
// 4) Set low = 0 and high = n-1
// 5) While low <= high Do
// 6)     Set mid = (low + high) / 2
// 7)     If arr[mid] == target Then
// 8)         Return mid
// 9)     Else If arr[mid] < target Then
// 10)        Set low = mid + 1
// 11)    Else
// 12)        Set high = mid - 1
// 13)    End If
// 14) End While
// 15) Return -1
// 16) End Binary_Search

#include <stdio.h>

// Function to perform iterative binary search
int Binary_Search(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return index if element is found
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if element is not found
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

    // Perform binary search
    int result = Binary_Search(arr, n, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
