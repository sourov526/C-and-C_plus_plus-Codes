#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void addLast(struct node **head, int val)
{
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode-> data = val;
    newnode->next = NULL;
    if(*head == NULL)
        *head = newnode;
    else
    {
        struct Node *last;
        last = *head;
        while(last-> next != NULL)
        {
            last = last->next;
        }
        last -> next = newnode;
    }

}

void printList(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = NULL;
    printList(head);

    printf("\n\nAfter Insertion: ");
    addLast(&head,10);
    addLast(&head,20);
    addLast(&head,30);
    printList(head);
    return 0;
}
