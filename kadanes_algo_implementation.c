//AISHI DE
#include <stdio.h>

int kadanes_algo(int arr[], int size) {
    
    if (size == 0) {
        return 0; 
        }
    
    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < size; i++) {
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

void print_array(int arr[] , int size){
    printf("Array is : ");
    for (int i = 0 ; i < size ; i ++) { 
        printf("%d \t", arr[i]);
}
printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array : \t");
    scanf("%d", &size);
    printf("\n");
    
    int arr[size];
    printf("Enter the elements of the array : \n");
    for(int i = 0 ; i <size ; i ++) {
        printf("Enter element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    print_array(arr, size);
    
    printf("\n");
    int result = kadanes_algo(arr, size);
    printf("The maximum subarray Sum is %d", result);
    
    return 0;
}


//OUTPUT : 
/*
Enter the size of the array : 	5

Enter the elements of the array : 
Enter element number 1 : 3
Enter element number 2 : 4
Enter element number 3 : -8
Enter element number 4 : 6
Enter element number 5 : -9

Array is : 3 	4 	-8 	6 	-9 	

The maximum subarray Sum is 7
*/

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/