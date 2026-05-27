#include <stdio.h>
int main() {

//AISHI DE
//REVERSE PYRAMID
    int row = 5;

    for (int i = 1 ; i <= row; i ++) {
        for ( int j = 1 ; j <= i -1 ; j ++ ){ 
            printf( "   ");
        }
        for (int k = 1; k <= 2 * (row - i)+1 ; k++){
            printf( " * ");
        }
        printf("\n");
    }
    return 0;
}