#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node* prev;
    struct Node* next;
};
// This function prints contents of linked list starting from the given node
void printlist(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}

// Program to create a simple linked list with 3 nodes
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate 3 nodes in the heap
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    head->data = 20;
    head->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = NULL;
    printlist(head);
    return 0;
}
