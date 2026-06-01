//AISHI DE

/*
Original Array : [0, 1, 2, 3, 4, 5, 6, 7]
Rotated Array : [4, 5, 6, 7, 0, 1, 2 , 3]
*/

//as the complexity should be in log so divide and conquere and we will use binary search 



#include <stdio.h>

int search(const int arr[], int size, int target) {
    if (size == 0) return -1;

    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 0, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int result = search(arr, size, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}