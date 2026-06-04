//s1 is variable , type is struct student 
//AISHI DE 

#include <stdio.h>

struct Student
{
    float marks;
    int rollno;
};

int main()
{
    printf("STUDENT RECORD !!!\n\n");

    struct Student s1;

    s1.rollno = 69;
    s1.marks = 69.69;

    struct Student *ptr = &s1;

    printf("Roll no of student 1 : %d\n", s1.rollno);
    printf("Marks of student 1 : %.2f\n\n", s1.marks);

    printf("Address stored in ptr : %p\n", (void*)ptr);

    return 0;
}