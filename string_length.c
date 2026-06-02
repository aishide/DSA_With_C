// AISHI DE
#include <stdio.h>
#include <string.h>

int main() {
    char ch = '&' ;
    printf("%c\n", ch);
    
//Strings are represented in the form of character array in c 
//anything inside  " " the compiler will treat it as a string constant 

    char str[10] = "Hello\0";
    printf("%s\n\n", str);
    
// in the end we put \0 which denotes the end of the string 
// Str = [H , e , l, l, o , \0]
//        0   1   2  3  4    5

//Length of string code
int count = 0, i = 0;

while(str[i] != '\0')
{
    count ++;
    i = i + 1;
}

printf("Length of string using while loop is : %d\n", count);
//this is strlen code 

int len = strlen(str);
printf("Length of string using the inbuild function strlen is : %d", len);

    return 0;
}