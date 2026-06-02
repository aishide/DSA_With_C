// AISHI DE
#include <stdio.h>
#include <string.h>

int main() {

    char str[10] = "Hello";
    printf("The string is : %s\n\n", str);
    
    int size = strlen(str) - 1;
    printf("Length of string using the inbuild function strlen is : %d\n", size);
    
    //Reverse of the string
    printf("The reverse of teh string is : ");
    while(size >= 0){
        printf("%c", str[size]);
        size = size - 1;
    }

    return 0;
}