#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void addbeg(struct node **head,int x)
{
    {
        struct node *a = malloc(sizeof(struct node));
        a->data = x;

        a->next = *head;

        *head = a;
    }
}
addend(struct node**head,int x)
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

void concate(struct node *head1, struct node*head2)
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
void display(struct node*head)
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
    printf("Element of node A : ");
    addbeg(&head2,1);
    addbeg(&head2,2);
    addbeg(&head2,3);
    display(head2);
    printf("\n\n");
    printf("Element of node B : ");
    addend(&head1,4);
    addend(&head1,5);
    addend(&head1,6);

    display(head1);
    printf("\n\n");
    printf("After concatenate: ");
    concate(head2,head1);
    display(head2);
    printf("\n");

    return 0;
}
