#include <stdio.h> 
int main() {
    
    //AISHI DE
    //....*
    //...**
    //..***
    //.****
    //*****
    
    /*
    for() //OUTER (rows)
    {
        for() //Space
        {
            decement
        }
        for() //STAR
        {
            increment
        }
    }
    */
    for (int i = 0 ; i < 5 ; i ++ ) {
        for (int j = 4 ; j > i ; j--){
            printf(" - ");
        }
        for(int k = 0; k <= i ; k++) { 
            printf(" * ");
        }
        printf("\n");
    }
    
return 0;

// inner loop condition is always checked with the row 
}

