#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* Insert at End */
void insert(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

/* Insert at Beginning */
void addAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

/* Insert at a Specific Position (1-based indexing) */
void addInBetween(struct Node **head, int position, int value)
{
    if (position < 1)
    {
        printf("Invalid Position!\n");
        return;
    }

    /* Position 1 means beginning */
    if (position == 1)
    {
        addAtBeginning(head, value);
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    struct Node *temp = *head;

    for (int i = 1; i < position - 1; i++)
    {
        if (temp == NULL)
        {
            printf("Invalid Position!\n");
            free(newNode);
            return;
        }

        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

/* Insert at End */
void addInEnd(struct Node **head, int value)
{
    insert(head, value);
}

/* Display Linked List */
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("Empty Linked List!\n");
        return;
    }

    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Initial List:\n");
    display(head);

    printf("\nAfter Adding 5 at Beginning:\n");
    addAtBeginning(&head, 5);
    display(head);

    printf("\nAfter Adding 25 at Position 4:\n");
    addInBetween(&head, 4, 25);
    display(head);

    printf("\nAfter Adding 40 at End:\n");
    addInEnd(&head, 40);
    display(head);

    return 0;
}