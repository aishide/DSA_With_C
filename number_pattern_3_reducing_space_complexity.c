#include <stdio.h>
int main() {

    //AISHI DE
    //Print the pattern 
    //1 2 3
    //4 5 6 
    //7 8 9 

    //Why two loops - rows and column 
    //outer loop for rows 
    //inner loop for column


    //reduced space complexity here 
    
    for (int i = 1 ; i < 4 ; i ++ ) {
        for ( int j = 1 ; j < 4 ; j ++ ) { 
            printf("%d\t", (i -1) * 3 + j );
    }
    printf("\n");
    
}
return 0;
}
