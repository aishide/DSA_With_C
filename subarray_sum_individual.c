//AISHI DE
#include <stdio.h>

void maximum_subarray_sum(int arr[], int size) {

    int total_subarrays = 0;
    int total_sum = 0;

    for(int start = 0; start < size; start++) {

        for(int end = start; end < size; end++) {

            int sum = 0;

            printf("[ ");

            for(int i = start; i <= end; i++) {

                printf("%d ", arr[i]);

                sum = sum + arr[i];
                total_sum = total_sum + arr[i];
            }

            printf("]");

            printf(" = %d", sum);

            printf("\n");

            total_subarrays++;
        }
        printf("\nThe maximum subarray sum is  : %d\n", total_sum);
        printf("\n");
    }

    printf("Total number of subarrays = %d\n", total_subarrays);
}

int main() {

    int size;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {

        printf("Enter element no %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nAll Subarrays and Their Sums:\n\n");

    maximum_subarray_sum(arr, size);

    return 0;
}