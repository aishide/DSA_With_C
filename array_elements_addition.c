#include <stdio.h>
int main() {

    //aishi de
    int arr[10];

    for (int i = 1; i<11 ; i++ ) {
        arr[i] = i;
    }

    for (int i = 1; i < 11; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n\n");
    int sum = 0;

    for ( int j = 1 ; j<11;j++){
        sum += arr[j];
    }
    printf("sum is %d", sum);
    return 0;
}

/* 
try 2 

#include <stdio.h>
int main() {
    //AISHI DE
    //array elements addition 
    
    int arr[5] = {23, 45, 14, 53, 22};
    
    //display the elements of this array 
    for (int i = 0; i <  5 ; i ++) { 
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    //Addition of the elements 
    //answer should be 157
    int sum = 0;
    
    for (int j = 0 ; j < 5; j++) {
        sum += arr[j];
    }
    
    printf("\n The sum of the elements of this array is : %d" , sum);
    
    return 0;
}


*/