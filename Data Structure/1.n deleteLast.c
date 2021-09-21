#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void add(struct node **head, int val)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode-> data = val;
    newnode->next = NULL;
    if(*head == NULL)
        *head = newnode;
    else
    {
        struct node *last;
        last = *head;
        while(last-> next != NULL)
        {
            last = last->next;
        }
        last -> next = newnode;
    }
}
int deleteLastNode(struct node *head)
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
        return 1;

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
}
int main()

{
    struct node *head = NULL;

    add(&head, 100);
    add(&head, 200);
    add(&head, 300);
    add(&head, 400);

    printList(head);
    deleteLastNode(head);
    printf("\nAfter delete last node: ");
    printList(head);
    if (deleteLastNode(head)==1)
    {
        printf("\nTRUE");
    }
    getch();
}
