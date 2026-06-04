/*
    a                    ptr                                 pptr
|   10    |    <-   |   5000    |  => address of a   <-  |  8000  |
  |5000|               |8000|                              |4000|


int a = 10;
int *ptr = &a;
int **pptr = &ptr;

&variable   → Address of variable
*pointer    → Value stored at that address

*/

// AISHI DE
#include <stdio.h>

int main() {
    
    int a = 10;
    int *ptr = &a;
    
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in ptr %p \n", ptr);
    printf("Value pointed by ptr %d \n", *ptr);
    
    printf("\n");
    
    *ptr = 50;
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in ptr %p \n", ptr);
    printf("Value pointed by ptr %d \n", *ptr);

    printf("\n");
    int **pptr = &ptr;
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in pptr %p \n", pptr);
    printf("Value pointed by pptr %d \n", **pptr);
    
    printf("\n");
    int ***ppptr= &pptr;
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in ppptr %p \n", ppptr);
    printf("Value pointed by ppptr %d \n", ***ppptr);
    
    printf("\n");
    int ****pppptr = &ppptr;
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in pppptr %p \n", pppptr);
    printf("Value pointed by pppptr %d \n", ****pppptr);
    
    printf("\n");
    int *****ppppptr = &pppptr;
    printf("Value of a is %d \n", a);
    printf("Address of a is %p \n", &a);
    printf("Value stored in ppppptr %p \n", ppppptr);
    printf("Value pointed by ppppptr %d \n", *****ppppptr);
    
    
    return 0;
}