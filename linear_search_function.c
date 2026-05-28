#include <stdio.h>

// AISHI DE

void linear_search(int arr[], int size, int target) {

    int found = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {

            printf("Element %d is found at index %d\n", target, i);

            found = 1;

            break;
        }
    }

    if (found == 0) {

        printf("Element %d is not found in the array\n", target);
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 3;

    linear_search(arr, size, target);

    return 0;
}