// AISHI DE
//insertion in the beginning 

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(struct Node **head, int value) {

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // Empty Linked List
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    // Move to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Connect last node with new node
    temp->next = newNode;
}

void display(struct Node *head) {

    if (head == NULL) {
        printf("Empty Linked List\n");
        return;
    }

    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void insert_at_start(struct Node **head, int value) {

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = *head;
    *head = newNode;

}

int main() {

    struct Node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    insert_at_start(&head , 5);

    display(head);

    return 0;
}