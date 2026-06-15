//Iterative approach in Factorial 

#include <stdio.h>

void factorial(int num) {
    int fact = 1;
    //not 0 as 0 * anything is 0
    for (int i = 1 ; i <= num ; i++)
    {
        fact = fact*i;
    }
    printf("Factorial is %d\n", fact);
}

int main () {
    factorial(6);
    return 0;
}