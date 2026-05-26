#include <stdio.h>
int main() {
    //AISHI DE
    printf("Swapping of two numbers\n\n");
    int a , b, temp;
    a = 10;
    b = 20;
    
    printf("Before Swap\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n\n", b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swap\n");
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    return 0;
}