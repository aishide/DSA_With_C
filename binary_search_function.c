#include <stdio.h>

//AISHI DE
// Binary Search Function

int binarySearch(int arr[], int size, int target) {

    int low = 0;
    int high = size - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {

    // AISHI DE

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements in sorted order:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    printf("\nYour array is:\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");

    // Function call
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("The target element %d is found at index %d!", target, result);
    }
    else {
        printf("Element %d not found!", target);
    }

    return 0;
}