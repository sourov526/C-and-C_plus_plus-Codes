#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void add(struct node **head, int val)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode-> data = val;
    newnode->next = NULL;
    if(*head == NULL)
        *head = newnode;
    else
    {
        struct node *last;
        last = *head;
        while(last-> next != NULL)
        {
            last = last->next;
        }
        last -> next = newnode;
    }
}

int deleteFirstNode(struct node**head)
{
 struct node *del;
 if(head == NULL)
 {
     printf("List is empty\n");
 }
 else
 {
     del = *head;
     (*head) = (*head)->next;
     free(del);
     return 1;

 }
}
void printList(struct node*head)
{
    struct node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()

{
    struct node *head = NULL;
    add(&head, 10);
    add(&head, 20);
    add(&head, 50);
    add(&head, 60);
    printList(head);
    deleteFirstNode(&head);
    printf("\nAfter delete first node: ");
    printList(head);
    if (deleteFirstNode(&head)== 1)
    {
        printf("\nTRUE");
    }
    getch();


}

