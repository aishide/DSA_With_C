#include <stdio.h>
int main() {

    //AISHI DE
    //Print the pattern 
    //123
    //456
    //789

    //Why two loops - rows and column 
    //outer loop for rows 
    //inner loop for column

    int num = 0;

    for (int i=1; i<=3; i++){
        for (int j=1; j<=3; j++) {
            num ++;
            printf("%d\t", num);
        }
        printf("\n");
    }

    return 0;

    //But space complexity is high 
}


//logic 
/*
i = 1    1<3  - true
    j = 1    1<=3 - true   num = 0 + 1 = 1
    j = 2    2<=3 - true   num = 1 + 1 = 2
    j = 3    3<=3 - true   num = 2 + 1 = 3
    j = 4    4<=3 - false  exit inner loop and print new line
    
i = 2    2<=3  - true
    j = 1    1<=3 - true   num = 3 + 1 = 4
    j = 2    2<=3 - true   num = 4 + 1 = 5
    j = 3    3<=3 - true   num = 5 + 1 = 6
    j = 4    4<=3 - false  exit inner loop and print new line

i = 3    3<=3  - true
    j = 1    1<=3 - true   num = 6 + 1 = 7
    j = 2    2<=3 - true   num = 7 + 1 = 8
    j = 3    3<=3 - true   num = 8 + 1 = 9
    j = 4    4<=3 - false  exit inner loop and print new line   
*/