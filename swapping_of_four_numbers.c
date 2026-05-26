#include <stdio.h>
int main() {
    
    //AISHI DE
    int a , b, c, d, temp;
    printf("Enter your numbers!\n");
    printf("Number 1 : ");
    scanf("%d", &a);
    printf("Number 2 : ");
    scanf("%d", &b);
    printf("Number 3 : ");
    scanf("%d", &c);
    printf("Number 4 : ");
    scanf("%d", &d);
    
    printf("\n\n");
    printf("After swapping the four numbers : \n");
    
    temp = d;
    d = c;
    c = b;
    b = a;
    a = temp;
    
    printf("Number 1 : %d\n", a);
    printf("Number 2 : %d\n", b);
    printf("Number 3 : %d\n", c);
    printf("Number 4 : %d\n", d);
   
    
    return 0;
}