#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int nodesearch(struct node *head, int key)
{
    struct node *temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp-> data == key)
        {
            return 1;
            break;
        }
        temp = temp-> next;

    }
    return -1;
}
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
}
void display(struct node*head)
{
    struct node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct  node *head = NULL;
    add(&head,10);
    add(&head,20);
    add(&head,30);
    display(head);
    if(nodesearch(head,10)==1)
    {
        printf("Search Found\n");
    }
    else
    {
        printf("Search Not Found\n");
    }
    return 0;
}

