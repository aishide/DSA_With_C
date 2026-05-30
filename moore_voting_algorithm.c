//AISHI DE

#include <stdio.h>

void print_array(int arr[], int size) {
    printf("The array is: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int majorityElement(int* nums, int numsSize) {
    int i, candidate = 0, votes = 0;

    // Moore's Voting Algorithm
    for (i = 0; i < numsSize; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        }
        else {
            if (nums[i] == candidate)
                votes++;
            else
                votes--;
        }
    }

    // Verification Step
    int count = 0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > numsSize / 2)
        return candidate;

    return -1;
}

int main() {

    int size;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    print_array(arr, size);

    int majority = majorityElement(arr, size);

    if (majority != -1)
        printf("\nMajority Element = %d\n", majority);
    else
        printf("\nNo Majority Element Found\n");

    return 0;
}