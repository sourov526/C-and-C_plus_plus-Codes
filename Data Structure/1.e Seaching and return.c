#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int searchnode(struct node *head, int key)
{
    struct node *temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return temp->data;
            break;
        }
        temp = temp-> next;

    }
    return -1;
}
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
}
void printList(struct node*head)
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
    push(&head,10);
    push(&head,20);
    push(&head,30);
    printList(head);
    if(searchnode(head,10)==-1)
    {
        printf("Search not Found \n");
    }
    else
        printf("Search is Found and it is : %d",searchnode(head,10));


    return 0;
}
