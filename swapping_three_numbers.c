#include <stdio.h>
int main() {
    
    //AISHI DE
    int a , b, c, temp;
    printf("Enter your numbers!\n");
    printf("Number 1 : ");
    scanf("%d", &a);
    printf("Number 2 : ");
    scanf("%d", &b);
    printf("Number 3 : ");
    scanf("%d", &c);
    printf("\n\n");
    
    printf("After swapping the three numbers : \n");
    
    temp = c;
    c = b;
    b = a;
    a = temp;
    
    printf("Number 1 : %d\n", a);
    printf("Number 2 : %d\n", b);
    printf("Number 3 : %d\n", c);
    
    return 0;
}