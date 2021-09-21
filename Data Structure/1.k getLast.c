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
int getLast(struct node **head)
{
    if(*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node*current,*prv;
        current = head;
        prv = head;

        while(current!= NULL)
        {
            prv = current;
            current = current ->next;
        }
        return (prv->data);
    }

}
int main()
{


    struct node* head = NULL;
    add(&head, 55);
    add(&head, 20);
    add(&head, 25);

    printf("Last node is %d\n", getLast(head));
    return 0;
}

