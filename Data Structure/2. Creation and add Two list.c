#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void LinkedListA(struct node **head,int x)
{
    {
        struct node *a = malloc(sizeof(struct node));
        a->data = x;

        a->next = *head;

        *head = a;
    }
}
LinkedListB(struct node**head,int x)
{
    struct node *b;
    b  = (struct node*)malloc(sizeof(struct node));
    b->data=x;
    b->next = NULL;
    if(*head== NULL)
    {
        *head = b;
    }
    else
    {
        struct node *pinoy;
        pinoy = *head;
        while(pinoy->next != NULL)
        {
            pinoy = pinoy->next;
        }
        pinoy->next = b;
    }
}

void concatenation(struct node *head1, struct node*head2)
{
    struct node*ptr;
    if(head1 == NULL)
    {
        head1 = head2;
        return head1;
    }
    if(head2 == NULL)
    {
        return head1;
    }
    ptr = head1;
    while(ptr->next != NULL)
    {
        ptr = ptr ->next;
    }
    ptr->next = head2;
    return head1;
}
void printList(struct node*head)
{
    struct node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node*head1= NULL;
    struct node*head2 = NULL;
    printf("Elements of node A : ");
    LinkedListA(&head2,10);
    LinkedListA(&head2,15);
    LinkedListA(&head2,20);
    printList(head2);

    printf("\n\n");
    printf("Elements of node B : ");
    LinkedListB(&head1,30);
    LinkedListB(&head1,35);
    LinkedListB(&head1,40);
    printList(head1);

    printf("\n\n");
    printf("After concatenate: ");
    concatenation(head2,head1);
    printList(head2);
    printf("\n");

    return 0;
}
