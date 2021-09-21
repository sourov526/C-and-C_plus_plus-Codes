#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
};
struct node *head ;
void print()
{
    struct node * temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp ->next;
    }
    printf("\n");
}
int main()
{

    // allocating memory
    head = (struct node*)malloc(sizeof(struct node*));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));

    head -> data = 5;
    head -> prev = NULL;
    head -> next = NULL;
    first -> data = 3;
    first -> prev = head;
    first -> next = second;
    head ->next = first;
    second -> data = 9;
    second->prev = first;
    second -> next = NULL;
    print();

    //adding newnode to the first node
    struct node *up = (struct node*)malloc(sizeof(struct node));
    up -> data = 12;
    up -> next  = head;
    head -> prev = up;
    up -> prev  = NULL;
    head = up;
    print();
    // adding newnode at the last node
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = 10;
    newnode ->prev = second;
    newnode -> next = NULL;
    second ->next = newnode;
    print();



    return 0;

}

