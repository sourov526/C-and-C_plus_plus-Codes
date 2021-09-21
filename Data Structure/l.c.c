#include <assert.h>
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
int getnodepos(struct node *head, int index)
{
    struct node *current = head;
    int count =0;
    while(current != NULL)
    {
        if(count == index)
            return (current->data);
        count++;
        current = current ->next;
    }
    assert(0);
}
int main()
{


    struct node* head = NULL;
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    printf("Element at index 3 is %d\n", getnodepos(head, 3));
    getchar();
}
