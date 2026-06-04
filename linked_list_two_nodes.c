//AISHI DE 

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main() {
    
    struct Node *head = NULL, *temp;
    
    // here temp will create new node and link and so on....
    //CREATE FIRST NODE
     head =(struct Node *)malloc(sizeof(struct Node));
     head -> data = 100;
     head -> next = NULL;
     
     //if not malloc then new keyword 
     //CREATE SECOND NODE
     temp = (struct Node *)malloc(sizeof(struct Node));
     temp -> data = 101;
     temp -> next = NULL;
     head -> next = temp;
     
    return 0;
}
