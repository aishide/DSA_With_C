#include <stdio.h>

int sum ( int a , int b) {
    return a+b;
}
    
int main() {
    
    //AISHI DE
    //Function 
    
    /*
    Syntax : 
    return_type function_name(parameters) {
    // code to execute
    return value; // optional (depends on return_type)
}
    */
    
    //Simple function  
    
    int result = sum ( 5, 7);
    printf("The sum is %d\n", result);
    
    return 0;
}