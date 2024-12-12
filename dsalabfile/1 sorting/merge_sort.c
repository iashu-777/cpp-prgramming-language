// 1) Algorithm merge_sort(list, low, high)
// 2) Pre: list != ∅
// 3) Post: list has been sorted into values of ascending order
// 4) if low >= high // zero or one element
// 5)     return
// 6) else
// 7)     mid = (low + high) / 2 // midpoint of list[low:high]
// 8)     merge_sort(list, low, mid) // recursively sort list[low:mid]
// 9)     merge_sort(list, mid + 1, high) // recursively sort list[mid+1:high]
// 10)    merge(list, low, mid, high) // merge list[low:mid] and list[mid+1:high]
// 11) end merge_sort


// 1) Algorithm merge(list, low, mid, high)
// 2) Pre: two sorted subarrays in the list array
// 3) Post: two sorted subarrays merged into the list
// 4) nL = mid - low + 1
// 5) nR = high - mid
// 6) Let L and R be temporary arrays of nL and nR length
// 7) For i = 0 to nL - 1 Do
// 8)     L[i] = list[low + i]
// 9) For j = 0 to nR - 1 Do
// 10)    R[j] = list[mid + j + 1]
// 11) i = 0, j = 0, k = low
// 12) While i < nL and j < nR Do
// 13)    if L[i] <= R[j] then
// 14)        list[k] = L[i]
// 15)        i = i + 1
// 16)    else
// 17)        list[k] = R[j]
// 18)        j = j + 1
// 19)    end if
// 20)    k = k + 1
// 21) end while
// 22) While i < nL Do
// 23)    list[k] = L[i]
// 24)    i = i + 1
// 25)    k = k + 1
// 26) end while
// 27) While j < nR Do
// 28)    list[k] = R[j]
// 29)    j = j + 1
// 30)    k = k + 1
// 31) end while
// 32) end merge


#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid;    // Size of right subarray

    int L[n1], R[n2]; // Temporary arrays

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");

    return 0;
}
