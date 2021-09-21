#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

int delete()
{
    struct Node *temp = NULL;
    temp = (struct Node*)malloc(sizeof(struct Node));

    temp = head;
    head = temp->next;
    temp->next = NULL;
    free(temp);
}

void printList(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}


int main()
{

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

    printList(head);

    printf("\nAfter delete first node: ");
    delete();
    printList(head);
    return 0;
}
