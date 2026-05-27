#include <stdio.h>
#include <limits.h>

int main() {

    int a;
    printf("enter the number of elements in the array : ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int greatest = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    int fourth = INT_MIN;

    for (int i = 0; i < a; i++) {

        if (arr[i] > greatest) {
            fourth = third;
            third = second;
            second = greatest;
            greatest = arr[i];
        }
        else if (arr[i] > second && arr[i] != greatest) {
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != greatest) {
            fourth = third;
            third = arr[i];
        }
        else if (arr[i] > fourth &&
                 arr[i] != third &&
                 arr[i] != second &&
                 arr[i] != greatest) {
            fourth = arr[i];
        }
    }

    if (fourth == INT_MIN) {
        printf("There is no fourth greatest");
    } else {
        printf("Fourth greatest number is: %d", fourth);
    }

    return 0;
}