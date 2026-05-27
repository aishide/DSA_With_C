#include <stdio.h>

int main() {

    //AISHI DE
    //linear search by taking input from user

    int a;
    printf("enter the number of elements in the array: ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++) {
        printf("%d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for (int i = 0; i < a; i++) {
        printf("%d\t", arr[i]);
    }

    int target;
    printf("\n");
    printf("Enter your target element : \t");
    scanf("%d", &target);
    printf("\n");
    int found = 0;

    for (int i = 0; i < a; i++) {
        if (arr[i] == target) {
            printf("\nTarget %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("\nElement not found!\n");
    }

    return 0;
}