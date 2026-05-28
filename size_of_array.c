#include <stdio.h>
int main() {

    //AISHI DE
    int arr[10] = {12, 34, 45, 23, 54, 23, 67, 87, 58, 88};
    int size = sizeof(arr);
    printf("%d", size);
    printf("\n\n");
    // why 40 ?
    // as 10 elements and int so each element 4 bytes = 4 * 10 = 40 

    // so....

    int correct_size = sizeof(arr)/sizeof(arr[0]);
    printf("The actual size of the array is : %d" , correct_size);
    return 0;
}