#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void insertAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node* temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;

    free(temp);
}

void printlist(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));
    head->data = 8;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 3;
    fourth->next = fifth;
    fifth->data = 7;
    fifth->next = NULL;

    insertAfter(head->next->next, 9);

    deleteNode(&head, 7);

    printlist(head);
    return 0;
}
