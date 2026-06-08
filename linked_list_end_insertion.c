#include <stdio.h>
#include <stdlib.h>

struct Node { 
    int data;
    struct Node *next;
};

void insert (struct Node **head , int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode ->data = value;
    newNode -> next = NULL;

    if(*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp->next = newNode;

}

void addAtBeginning(struct Node **head , int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode ->next = NULL;

    //as starting me add wala case is append this is insert
    if(*head == NULL) {
        printf("Can not add in beginning , the linked list is empty \n");
        free(newNode);
        return;
    }

    newNode -> next = *head;
    *head = newNode;
}


void addInBetween(struct Node **head , int position,  int value) { 
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode ->next = NULL;

    if(*head == NULL) {
        printf("Can not add The Linked List is Empty \n");
        free(newNode);
        return;
    }

    //As this is inbetween case so...1st position me nahi aayega ye case 
    if(position == 1) {
        printf("Linked List is having only One Node (Invalid position)!!  \n");
        free(newNode);
        return;
    }

    struct Node *temp = *head;
    //This is LinkedList so loop will start from 1 
    for (int i = 1; i < position - 1; i++){
        temp = temp -> next;

        //if position ke pehele hi null
        if(temp == NULL){
            printf("Invalid position!! \n");
            free(newNode);
            return;
        }
    }
    newNode -> next = temp -> next ;
    temp -> next = newNode;
}

void addInEnd (struct Node **head , int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode ->next = NULL;

    if(*head == NULL) {
        printf("Can not add The Linked List is Empty \n");
        free(newNode);
        return;
    }

    struct Node *temp = *head;

    while (temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode; 

}

void display(struct Node **head ) {
    struct Node *temp = *head;

    if(*head == NULL) {
        printf("Empty Linked List!! \n");
        return;
    }

    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n\n");
}

int main() {
    struct Node *head = NULL;
    insert(&head, 10);
    insert(&head , 20);
    insert(&head , 30);
    display(&head);

    printf("After Adding 5 in beginning : \n");
    addAtBeginning(&head , 5);
    display(&head);
    printf("4 Nodes are here now \n\n");

    printf("Now I want to add a node between 20 and 30 the value is 25 so....\n");
    //30 tak we will go as 30 milega waha we will add , ek new variable aayega position 

    addInBetween(&head , 4 , 25);
    display(&head);

    printf("\nNow I want to add in the end\n");
    addInEnd(&head , 40);
    display(&head);


    return 0;
}