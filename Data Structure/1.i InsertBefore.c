#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void push(struct node **head, int key)
{

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    struct node *last = *head;

    newnode->data = key;
    newnode-> next = NULL;
    if(*head == NULL)
    {
        newnode-> prev = NULL;
        *head = newnode;
        return ;
    }

    while(last-> next!=NULL)
    {
        last = last -> next;


    }
    last -> next = newnode;
    newnode->prev = last;
    return ;
}
insertBefore(struct node**head, struct node *nextnode,int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->prev = nextnode->prev;
    nextnode->prev = newnode;
    newnode->next = nextnode;
    if(newnode->prev!= NULL)

    {
        newnode->prev->next = newnode;
    }
    else
    {
        *head = newnode;
    }
}
void printList(struct node *head)
{
    struct node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp -> data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head = NULL;
    push(&head,15);
    push(&head,20);
    push(&head,25);
    push(&head,30);
    printList(head);

    printf("\nAfter Insertion: ");
    insertBefore(&head,head->next->next,50);
    printList(head);
}
