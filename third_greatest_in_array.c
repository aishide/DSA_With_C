#include <stdio.h>
#include <limits.h>
int main() {
    
    //AISHI DE
    //Third greatest element of the array 
    
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
    
    //Third greatest number logic 
    
    int greatest = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    
    for (int i = 0; i < a; i++) {
        
        if ( arr[i] > greatest) {
            third = second;
            second = greatest;
            greatest = arr[i];
           
        }
        else if (arr[i] > third && arr[i] != greatest && arr[i] != second) {
            third = arr[i];
        }
         
    }
    if (third == INT_MIN) { 
        printf("There is no third greatest");
    }
    else { 
     printf("The third greatest number in the array is : %d" , third);
    }
    return 0;
}