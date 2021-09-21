#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
};
void printlist(struct node* n)
{
    while (n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}
int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    head -> data = 20;
    head -> prev = NULL;
    head -> next = NULL;
    first -> data = 30;
    first -> prev = head;
    first -> next = second;
    head ->next = first;
    second -> data = 40;
    second->prev = first;
    second -> next = NULL;
    printlist(head);
    return 0;
}
