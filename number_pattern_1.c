#include <stdio.h>
int main() {

    //AISHI DE
    //Print the pattern 
    //111
    //222
    //333

    //Why two loops - rows and column 
    //outer loop for rows 
    //inner loop for column

    for (int i=1; i<=3; i++){
        for (int j=0; j<3; j++) {
            printf("%d\t", i);
        }
        printf("\n");
    }

    return 0;
}