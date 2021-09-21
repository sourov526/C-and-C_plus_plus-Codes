#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = (struct node*) malloc(sizeof(struct node));
    struct node *first = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));


    head->data=20;
    head->next=first;

    first->data=25;
    first->next=second;

    second->data=30;
    second->next=NULL;

    struct node *temp=head;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    printf( "%d",temp->data);

    return 0;
}
