#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void addfirst(struct node **head, int val)
{
    struct node *newnode;
    newnode = (struct newnode*)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode->next = *head;
    *head = newnode;

}

void delete_firstnode(struct node**head)
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

 }
}
void display(struct node*head)
{
    struct node*temp;
    temp = head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()

{
    struct node *head = NULL;
    addfirst(&head,10);
    addfirst(&head,20);
    display(head);
    delete_firstnode(&head);
    display(head);


}
