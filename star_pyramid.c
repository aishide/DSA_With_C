#include <stdio.h>


int main() {
    printf("\n");
    for (int i = 0; i < 5; i++){
        for (int j = 4; j > i; j--){
            printf("  ");
        }
        for(int k = 0; k <= i; k++){
            printf("* ");
            if (k < i){
                printf("* ");
            }
        }
        printf("\n");
    }
}