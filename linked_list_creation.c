// arrays limitation -> it stores the data of similar type (cant store different datatypes)

//Linked list 
// dynamically grows and shrinks in size
// Different types of data can be stored in a linked list
// Insertion and deletion is easier in linked list as compared to arrays

//Structure of Linked List  -> Railway  (single linked list) 
// First Head Pointer - > Engine -> Coach 1 -> Coach 2 -> Coach 3 -> NULL



//Pointer me default value is Null value 

/*
head              Node 1             Node 2            Node 3
| NULL | -> | data | next | -> | data | next | -> | data | next | -> NULL

next is address of the next node 

Dynamic memory allocation -> creation of memory at runtime using malloc() and free() functions
*/

//AISHI DE 

#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

int main() {
    
    //Sab Yaha pe struct Node type ka hoga, sab pointer 
    
    struct Node *head = NULL;
    
    //Node banane ke liye we will use malloc() function 
    //Will use sizeof to calculate the size of the node as define karenge toh size we need 
   
    //This is type casting (explicit)
    //we used this for dynamic memory allocation 
    
    //To link we need to connect it to head 
    
     head =(struct Node *)malloc(sizeof(struct Node));
     head -> data = 100;
     head -> next = NULL;
     
     /*
     
     head               Node1
     |5000|  --->| data(100) | NULL |
              |
               ------ > 5000
     */
     
     //Linked list ka last node ka address part is null
     
     //First Node is Created 
    
    return 0;
}
