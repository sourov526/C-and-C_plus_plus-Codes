#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node * temp;
    temp = (struct node * )malloc(sizeof(struct node*));
    temp -> data = x;
    temp -> next = top;
    top = temp;
}
void pop()
{
    struct node *temp;
    if(top == NULL)
        return ;
    temp = top;
    top = top->next;
    free(temp);
}
void printList()
{
    struct node * temp;
    if(top == NULL)
    {
        printf("Empty Stuck\n");
    }
    else
    {
        temp = top;
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp = temp ->next;
        }
    }
}
int main()
{

    printf("\nBefore Popping:\n");
    push(2);
    push(3);
    push(15);
    push(20);
    push(25);
    push(30);
    printList();
    printf("\n\nAfter Popping: \n");
    pop(); // this will pop the element that is pushed at last
    pop();
    pop();
    printList();
    return 0;
}
