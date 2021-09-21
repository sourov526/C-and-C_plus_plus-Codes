#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void push(struct node **head, int val)
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
void printList(struct node*head)
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
    push(&head,10);
    push(&head,20);
    push(&head,30);
    printList(head);
}
