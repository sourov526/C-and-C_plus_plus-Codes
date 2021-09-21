#include<stdio.h>
#include<stdlib.h>

struct Node
{
    float data;
    struct Node* next;
};
void printlist(struct Node* n)
{
    while (n != NULL)
    {
        printf("%.1f ",n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    head->data = 1.3;
    head->next = second;
    second->data = 2.3;
    second->next = NULL;
    printlist(head);
    return 0;
}
