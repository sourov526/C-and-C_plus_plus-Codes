#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void addfirst(struct node **head, int val)
{
    struct node *newnode;
    newnode = (struct newnode*)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode->next = *head;
    *head = newnode;

}
void deleteLastNode(struct node *head)
{
    struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }

        free(toDelete);

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
    struct node *head = NULL;

    addfirst(&head,10);
    addfirst(&head,20);
    display(head);
    deleteLastNode(head);
    display(head);
}
