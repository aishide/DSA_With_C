#include <stdio.h>
#include <limits.h>
int main() {
    
    //AISHI DE
    //Second greatest element of the array 
    
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
    
    //Second greatest number logic 
    
    int greatest = arr[0];
    int second = INT_MIN;
    
    for (int i = 1; i < a; i++) {
        
        if ( arr[i] > greatest) {
            second = greatest;
            greatest = arr[i];
           
        }
        else if (arr[i] > second && arr[i] != greatest) {
            second = arr[i];
        }
         
    }
    if (second == INT_MIN) { 
        printf("There is no second greatest");
    }
    else { 
     printf("The second greatest number in the array is : %d" , second);
    }
    return 0;
}