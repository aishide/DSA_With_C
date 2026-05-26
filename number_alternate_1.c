#include <stdio.h>

int main() {

    // 1 _ 3
    // _ 5 _
    // 7 _ 9

    int num = 0;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            num++;

            if (num % 2 == 0) {
                printf("_\t");
            }
            else {
                printf("%d\t", num);
            }
        }
        printf("\n");
    }

    return 0;
}