#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
void printlist(struct node* n)
{
    while(n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}
int main()
{
    struct node* head = NULL;
    head =(struct node*) malloc(sizeof(struct node));
    struct node*first = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));
    struct node* third = (struct node*) malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 20;
    head->next = first;
    first->prev = head;
    first->data = 30;
    first->next = second;
    second->prev = first;
    second->data = 40;
    second->next = third;
    third->prev = second;
    third->data = 50;
    third->next = NULL;
    printlist(head);

}
