#include <stdio.h>
int main() {
    //AISHI DE
    int y[2] = {2, 6};
    printf("%d\n", y[0]);
    printf("%d\n", y[1]);
   
    printf("\n\n");
    
    int a;
    printf("Enter the size of your array : \n");
    scanf("%d", &a);
    
    printf("\n");
    int arr[a];
    printf( "Enter the elements of your array : \n");
    for (int i = 0 ; i < a; i++) {
        printf("Enter element number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n");
    printf("Your array is : ");
    for (int i = 0; i < a; i++) {
        printf("%d\t", arr[i]);
    }
    
    
}