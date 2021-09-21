#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int a,b;
    struct Node* next;
};
void printlist(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d ",n->a);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    head->a = 4;
    head->next = second;
    second->a = 7;
    second->next = NULL;
    printlist(head);
    return 0;
}


