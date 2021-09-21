#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push(struct node**head,int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = (*head);
    (*head) = newnode;
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
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    printf("Last node element is %d\n", getLast(head));
    getchar();
}
