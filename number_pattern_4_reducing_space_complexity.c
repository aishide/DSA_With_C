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


    //reduced space complexity here 
    
    for (int i = 1 ; i < 4 ; i ++ ) {
        for ( int j = 1 ; j < 4 ; j ++ ) { 
            printf("%d\t", 13 - (i * 3) - j);
    }
    printf("\n");
    
}
return 0;
}
