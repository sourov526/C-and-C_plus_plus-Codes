#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
    // allocate node
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}
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
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printlist(head);
    push(&head, 6);
    return 0;
}


