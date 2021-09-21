#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    head = (struct node *) malloc(sizeof(struct node));
    struct node *first = (struct node *) malloc(sizeof(struct node));
    struct node *second = (struct node *) malloc(sizeof(struct node));


    head->data=5;
    head->next=first;

    first->data=10;
    first->next=second;

    second->data=15;
    second->next=NULL;

    struct node *temp=head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    printf( "\n%d",temp->data);

    return 0;
}


