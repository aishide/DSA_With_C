#include <stdio.h>
int main () {

//An array in C is a fixed-size, sequential collection of elements of the same data type stored in contiguous (adjacent) memory locations. Instead of declaring separate variables for each value, an array allows you to store multiple values under a single variable name and access them using an index.
    //aishi de
    
    int arr[5];
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);

printf("\n\n");

    arr[0] = 12;
    arr[1] = 34;
    arr[2] = 76;
    arr[3] = 43;
    arr[4] = 87;


    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    
return 0;

// to access values of array we need loops
}
