#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;

    struct node *next;
    struct node *prev;

};
void last(struct node **head, int val)
{

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
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
void reverse(struct node**head)
{
    struct node*current;
    current = *head;
    struct node *temp = NULL;
    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != NULL )
        *head = temp->prev;
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
    last(&head,9);
    last(&head,10);
    last(&head,20);
    display(head);
    reverse(&head);
    display(head);
    return 0;
}
