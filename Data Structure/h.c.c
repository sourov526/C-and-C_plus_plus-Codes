#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void addLast(struct node **head, int val)
{
    struct node*newnode;
    newnode = (struct newnode*)malloc(sizeof(struct node));
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
    struct node*head = NULL;
    addLast(&head,10);
    addLast(&head,20);
    addLast(&head,30);
    display(head);
    return 0;
}
