//AISHI DE

#include <stdio.h>

void merge_array(int arr1[], int size1, int arr2[], int size2) {
    int i = size1 - 1;
    int j = size2 - 1;
    int k = size1 + size2 - 1;

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        }
        else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

void print_array(int arr[], int size) {
    printf("Array: ");
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

int main() {

    int size1, size2;

    printf("Enter the size of array 1: ");
    scanf("%d", &size1);

    printf("Enter the size of array 2: ");
    scanf("%d", &size2);

    // arr1 needs extra space for merging
    int arr1[size1 + size2];
    int arr2[size2];

    printf("\nEnter %d sorted elements for array 1:\n", size1);

    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter %d sorted elements for array 2:\n", size2);

    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\nFirst Array Before Merge:\n");
    print_array(arr1, size1);

    printf("Second Array:\n");
    print_array(arr2, size2);

    merge_array(arr1, size1, arr2, size2);

    printf("\nMerged Array:\n");
    print_array(arr1, size1 + size2);

    return 0;
}