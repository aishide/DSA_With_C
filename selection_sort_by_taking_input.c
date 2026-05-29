// AISHI DE

// We compare and find the minimum element
// and swap it with the current element.
// Left side becomes sorted
// and right side remains unsorted.

#include <stdio.h>

void selection_sort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        int min_index = i;

        // Finding minimum element in unsorted part
        for (int j = i + 1; j < size; j++) {

            if (arr[j] < arr[min_index]) {

                min_index = j;
            }
        }

        // Swapping
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void print_array(int arr[], int size) {

    for (int i = 0; i < size; i++) {

        printf("%d\t", arr[i]);
    }
}

int main() {

    int size;

    printf("Enter the size of your array:\n");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter element no %d of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting the array is:\n");

    print_array(arr, size);

    printf("\n\n");

    selection_sort(arr, size);

    printf("The sorted array is:\n");

    print_array(arr, size);

    return 0;
}

// First loop -> sorted part
// Second loop -> unsorted part

/* 
Your understanding is also correct:

First loop (i) → maintains sorted portion
Second loop (j) → searches unsorted portion for minimum element

Selection Sort Complexity:

Comparisons:
O(n
2
)
Space Complexity:
O(1)
*/