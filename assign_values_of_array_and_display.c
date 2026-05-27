#include <stdio.h> 
int main() { 
    //AISHI DE
    // print and assign the values in array 
    int arr[5];
    int a = 100;

    for (int i = 0 ; i <5; i++) { 
        arr[i] = a;
        a++;
    }
    for (int j = 0; j<5; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}