#include <stdio.h>
int main() {

    //AISHI DE
    //Print the pattern 
    //987
    //654
    //321

    //Why two loops - rows and column 
    //outer loop for rows 
    //inner loop for column

    int num = 10;

    for (int i=1; i<=3; i++){
        for (int j=1; j<=3; j++) {
            num --;
            printf("%d\t", num);
        }
        printf("\n");
    }

    return 0;

    //But space complexity is high 
}


