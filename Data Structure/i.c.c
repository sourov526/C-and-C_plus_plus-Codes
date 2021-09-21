#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void add(struct node **head, int val)
{

    struct node *newnode = (struct no de*)malloc(sizeof(struct node));
    struct node *last = *head;

    newnode->data = val;
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
void display(struct node *head)
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
    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    display(head);//  40 30 20 10
    insertBefore(&head,head->next->next,100);
    display(head);
}
