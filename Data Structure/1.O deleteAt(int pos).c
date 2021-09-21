#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void add(struct Node **head, int key)
{
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode-> data = key;
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
int deletePosNode(struct Node ** head, int key)
{
    struct Node *temp;

    if((*head)->data == key)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;
    }
    else
    {
        struct Node* current;
        current = *head;

        while(current-> next != NULL)
        {
            if(current-> next->data == key)
            {
                temp = current -> next;
                current-> next = current->next->next;
                free(temp);
            }
            else
            {
                current = current -> next;
            }
            return 1;
        }
    }

}

void display(struct Node*head)
{
    struct Node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct Node*head = NULL;
    add(&head, 100);
    add(&head, 200);
    add(&head, 300);
    add(&head, 400);
    add(&head, 500);
    display(head);
    printf("\nAfter delete pos node: ");
    deletePosNode(&head, 200);
    display(head);

    if (deletePosNode(&head, 20) == 1)
        printf("\nTRUE");

    return 0;
}
