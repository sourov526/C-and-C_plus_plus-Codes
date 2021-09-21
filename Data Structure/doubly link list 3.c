#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
};

void insertBefore(struct node** head_ref, struct node* next_node, int new_data)
{
    if (next_node == NULL) {
        printf("the given next node cannot be NULL");
        return;
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;

    new_node->prev = next_node->prev;

    next_node->prev = new_node;

    new_node->next = next_node;

    if (new_node->prev != NULL)
        new_node->prev->next = new_node;

    else
        (*head_ref) = new_node;

}

void insertEnd(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct Node*)malloc(sizeof(struct node));

    struct node* last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    new_node->prev = last;

    return;
}
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

    insertBefore(&head, head, 8);
    insertEnd(&head, 4);
    printlist(head);
    return 0;
}
