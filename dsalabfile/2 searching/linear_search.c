// 1) Algorithm Linear_Search(arr, n, target)
// 2) Pre: arr != ∅, n is the size of arr, target is the element to be searched
// 3) Post: If target is found in arr, return its index; otherwise, return -1
// 4) For i = 0 to n-1 Do
// 5)     If arr[i] == target Then
// 6)         Return i
// 7)     End If
// 8) End For
// 9) Return -1
// 10) End Linear_Search

#include <stdio.h>

// Function to perform linear search
int Linear_Search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if element is found
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
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    // Taking user input for the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Perform linear search
    int result = Linear_Search(arr, n, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
