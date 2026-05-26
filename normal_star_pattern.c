#include <stdio.h>
int main() {

    //AISHI DE
    //Print the pattern 
    //***
    //***
    //***

    //Why two loops - rows and column 
    //outer loop for rows 
    //inner loop for column

    for (int i=1; i<=3; i++){
        for (int j=1; j<=3; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}