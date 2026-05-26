#include <stdio.h>

int main() {

    // _ 2 _
    // 4 _ 6
    // _ 8 _

    int num = 0;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            num++;

            if (num % 2 != 0) {
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