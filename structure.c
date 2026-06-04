/*
Object oriented programming ki start is from structure 

A structure (struct) in C is a user-defined data type that allows you to group different types of data under one name.

Why use a structure?

Suppose you want to store information about a student:

Name (string)
Roll Number (int)
Marks (float)

Instead of creating separate variables, you can group them together using a structure.

*/


//AISHI DE 
#include <stdio.h> 

struct Student 
{
    int rollno;
    float marks;
};

// It is a user defined data type 
int main() {
    
    printf("STUDENT RECORD !!! \n\n");
    
    struct Student s1, s2, s3, s4, s5;
    s1.rollno = 001;
    s1.marks = 78.8;
    
    printf("Roll number of student 1 that is s1 is  : %d \n", s1.rollno);
    printf("Marks of studnet 1 is : %.2f \n\n", s1.marks);
    
    s2.rollno = 002;
    s2.marks = 34.56;
    
    printf("Rollno of student 2 : %d\n", s2.rollno );
    printf("Marks of student 2 : %.2f\n\n", s2.marks);
    
    s3.rollno = 003;
    s3.marks = 98.6;
    
    printf("Rollno of student 3 : %d\n", s3.rollno );
    printf("Marks of student 3 : %.2f\n\n", s3.marks);
    
    s4.rollno = 004;
    s4.marks = 54.77;
    
    printf("Rollno of student 4 : %d\n", s4.rollno );
    printf("Marks of student 4 : %.2f\n\n", s4.marks);
    
    s5.rollno = 005;
    s5.marks = 23.66;
    
    printf("Rollno of student 5 : %d\n", s5.rollno );
    printf("Marks of student 5 : %.2f\n\n", s5.marks);
    
    //s1 is variable , type is struct studnet 
    
    return 0;
}