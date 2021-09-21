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

int firstnode(struct node *head)
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *current;
        current = head;
        return (current->data);
    }
}
int main()
{


    struct node* head = NULL;
    add(&head, 55);
    add(&head, 22);
    add(&head, 15)


    printf("First node element is:  %d\n", firstnode(head));
    return 0;
}

