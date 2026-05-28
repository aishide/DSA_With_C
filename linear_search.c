#include <stdio.h>

int main() {
     //AISHI DE
    // Predefined array
    int arr[] = {10, 20, 30, 40, 50};

    int target = 30;
    int found = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    // Linear Search
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    // If element not found
    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
