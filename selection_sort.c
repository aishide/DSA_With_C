//AISHI DE

//we will compare and find the minimum element and swap it with it 
//so left me sorted array and righ me unsorted array 

#include <stdio.h>

void selection_sort ( int arr[] , int size ) { 

    for (int i = 0 ; i < size - 1; i ++) { 
        int min_index = i ;
        for (int j = i +1 ; j < size ; j ++) { 
            if (arr[j] < arr[min_index]){
            min_index = j;
            }
        }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
    }
}

void print_array ( int arr[] , int size) { 
    for (int i = 0 ; i < size ; i ++)  {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[10] = {23, 43, 13, 44, 53, 52, 76, 42, 87, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting the array is : \n");
    print_array(arr, size);

    printf("\n\n");

    selection_sort(arr , size);

    printf("The sorted array is \n");
    print_array(arr, size);

    return 0;
}