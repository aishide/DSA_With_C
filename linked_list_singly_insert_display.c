//AISHI DE
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data ;
    struct Node *next;
};

//Already main me head is a pointer and usko point karne ke liye we are using double pointer in parameter
//Pointer variable ka address hai and uska address so double pointer
// The double pointer (struct Node **head) is used because the function may need to change the actual head pointer of the linked list.
// Node *head → "Here is the list."
// Node **head → "Here is the address of the variable that stores the start of the list."

void insert ( struct Node ** head , int value ) {

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode -> data = value ;
    newNode -> next = NULL;

    //Linked list is empty and need to connect the first node with head
    if ( *head == NULL )  {
        *head = newNode;
        return;
    }

    //traversing -> Sare nodes ko visit karna (While loop)
    //if node ka next part is NULL then it is last node

    //we will not traverse with head if we do then head last me aayega

    struct Node *temp = *head;   // it is pointing at first node

    while (temp -> next != NULL) {
        temp = temp -> next ;
    }

    temp -> next = newNode;
}

void display (struct Node **head) {

    struct Node *temp = *head;

    if (temp == NULL) {
        printf("Empty Linked List \n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

int main() {

    // Append Operation in Singly Linked List
    // Append -> Last me node add in existing linked list

    struct Node *head = NULL;

    insert( &head , 10 );   // Need head ka status and data
    insert( &head , 20 );
    insert( &head , 30 );

    display (&head);

    return 0;
}