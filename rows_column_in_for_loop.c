#include <stdio.h>

// rows and column matrix simple .

int main() {
    
    for (int i = 0 ; i < 5 ; i++) { 
        for (int j = 0 ; j < 5; j++) { 
            printf("%d %d \n", i , j );
        } 
        printf("\n");
    }
    return 0;
}