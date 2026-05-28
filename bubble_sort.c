// Bubble Sort

/*
compare the element with the next element if the current element is greater than the next element then swap them.
then compare the next element with the next element and so on until the end of the array.
then repeat the process for the first n-1 elements and so on until the array is sorted.
*/

// Bubble Sort is called Bubble Sort because the largest (or smallest) elements “bubble up” to their correct positions step by step just like air bubbles rising to the surface of water

/*

PASS : for () //outer 
       {
        for () // inner loop for iteration
         {
           if()
           {
           //swap
           }
         }
         }
*/

//number of passes will be always size - 1


#include <stdio.h>

int main() {

    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");

    for (int i = 0; i < size; i++) {
        printf("Enter element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }


    //Bubble sort 
    for (int i = 0 ; i < size-1 ; i ++ ) {
        for ( int j = 0 ; j <size - 1 ; j++) { 
            if (arr[j] > arr[j+1]) { 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n");
    printf("Your sorted array is : \n");
    for (int i = 0 ; i < size ; i++) { 
        printf("%d\t", arr[i]);
    }

    return 0;
}
