#include <stdio.h>
int main() {
    //AISHI DE

    //7 , 8, 14, 16, 21 , 24, 28, 32, .......

    int a = 7;
    int b = 8;
    printf("The series is : \n");
    for (int i = 1; i <11 ; i++) {
        printf("%d\t", a*i);
        printf("%d\t", b*i);
    }
    printf("...");
    return 0;
}