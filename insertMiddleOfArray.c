#include <stdio.h>

// Function to insert an element in the middle of an array
void insertInMiddle(int arr[], int *n, int element) {
    int mid = *n / 2; // Find the middle index
    for (int i = *n; i > mid; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[mid] = element; // Insert the new element
    (*n)++; // Increase the size of the array
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element;

    printf("Original array: ");
    printArray(arr, n);

    printf("Enter element to insert in the middle: ");
    scanf("%d", &element);

    insertInMiddle(arr, &n, element);

    printf("Array after insertion: ");
    printArray(arr, n);

    return 0;
}
