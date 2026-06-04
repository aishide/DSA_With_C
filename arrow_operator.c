//AISHI DE 
#include <stdio.h> 

struct student  
{
    int rollno;
    float marks;
};

// It is a user defined data type 
int main() {
    
    printf("STUDENT RECORD !!! \n\n");
    
    struct student s1, s2, s3, s4, s5;
    
    s1.rollno = 69;
    s1.marks = 69.69;
    
    struct student *aishi = &s1;
    
    printf("Roll no of student 1 : %d\n", aishi -> rollno );
    printf("Marks of student 1 : %.3f\n\n", aishi -> marks);
    
    //used in linked list, binary tree, graph, hash table etc.
    return 0;
}