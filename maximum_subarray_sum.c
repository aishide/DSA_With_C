//AISHI DE
#include <stdio.h>

void maximum_subarray_sum(int arr[] , int size){
    
    int sum = 0; 
    
    for(int start = 0 ; start < size ; start++){
        for (int end = start; end <size; end ++) { 
            for (int i = start ; i <= end; i++) {
                printf("%d", arr[i]);
                sum += arr[i];
            }
            printf("   ");
        }
        printf("\n");
    }
    printf("\nThe maximum subarray sum is  : %d\n", sum);
}

int main() { 
    int size ;
    printf("Enter the size of array : \t");
    scanf("%d", &size);
    
    printf("\n");
    
    int arr[size]; 
    
    for(int i = 0 ; i <size ; i ++) { 
        printf("Enter the element no %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    maximum_subarray_sum(arr, size);
    
    printf("\n");
    
    int sub = size * (size + 1) / 2 ; 
    printf("The number of subarrays will be  : \t%d \n", sub);
    
    
    
    
    return 0;
}