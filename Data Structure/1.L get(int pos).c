#include <assert.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void add(struct Node **head, int val)
{
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode-> data = val;
    newnode->next = NULL;
    if(*head == NULL)
        *head = newnode;
    else
    {
        struct Node *last;
        last = *head;
        while(last-> next != NULL)
        {
            last = last->next;
        }
        last -> next = newnode;
    }
}

int getPosNode(struct Node *head, int index)
{
    struct Node *current = head;
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


    struct Node* head = NULL;
    add(&head, 25);
    add(&head, 30);
    add(&head, 35);
    add(&head, 33);
    add(&head, 50);
    add(&head, 65);
    add(&head, 45);

    printf("The element at index 3 is %d\n", getPosNode(head, 3));
    return 0;
}
