#include<stdio.h>
#include<stdlib.h>
void printlist();
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

    second->data = 15;
    second->next=NULL;
    display();

    head->next=second; //deleting
    free(first);
    display();

    return 0;
}

void display()
{
    printf("\n My list:");
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

}





