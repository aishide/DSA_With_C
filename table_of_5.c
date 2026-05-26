#include <stdio.h>
int main() {
    //AISHI DE
    printf("Table of 5 :\n\n");

    //for (initialization; condition; update)
    int a = 5;

    for (int i = 1; i<11; i++) { 
        printf("%d x %d = %d\n", a, i, a*i);
    }
    return 0;
}