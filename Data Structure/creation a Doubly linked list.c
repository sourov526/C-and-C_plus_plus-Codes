#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node * next;
};
struct node *head;
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
    head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
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
    return 0;

}
