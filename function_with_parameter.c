#include <stdio.h>

void say_hello (char name[])
{
    printf("Hello %s\n",name);
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
    
    say_hello("Aishi");
    
    return 0;
}