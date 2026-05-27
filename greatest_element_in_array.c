#include <stdio.h>
int main() {
    
    //AISHI DE
    //Greatest element of the array 
    
    int a ;
    printf("enter the number of elements in the array : " );
    scanf("%d", &a);
    
    printf("\n");
    
    int arr[a];
    
    for (int i = 0 ; i<a ; i++) { 
        printf(" %d element : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    printf("The array is : ");
    for (int i = 0 ; i < a; i++) {
        printf("%d\t", arr[i]);
    }
    
    printf("\n\n");
    
    //Greatest number logic 
    
    int greatest ; 
    greatest = arr[0];
    
    for (int i = 1; i < a; i++) {
        if ( greatest < arr[i]) {
            greatest = arr[i];
           
        }
         
    }
     printf("The greatest number in the array is : %d" , greatest);
    return 0;
}