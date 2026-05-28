#include <stdio.h>

// Bubble Sort Function
void bubblesort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void print_array (int arr[],  int size) { 
    for(int i = 0 ; i <size ; i++) { 
        printf("%d\t", arr[i]);
    }
}

int main() {

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    
    for (int i = 0 ; i < size ; i ++ ){
        printf("Enter the element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    print_array(arr, size);

    printf("Array elements are:\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    // Function call
    bubblesort(arr, size);

    printf("\n");
    printf("Your sorted array is:\n");

   print_array(arr, size);

    return 0;
}