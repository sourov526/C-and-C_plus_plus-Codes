#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void add(struct node **head, int val)
{
    struct node *newnode,*temp;
    newnode = (struct newnode*)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode->next = NULL;

    if(*head == NULL)
    {
        *head =temp= newnode;
    }
    else
    {
        temp ->next = newnode;
        temp = newnode;
    }
    temp ->next = *head;
}
void display(struct node*head)
{
    struct node*temp;
    temp = head;
    while(temp->next!= head)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf(" %d",temp->data);
}
int main()
{
    struct  node *head = NULL;
    add(&head,10);
    add(&head,20);
    add(&head,30);
    display(head);
}
