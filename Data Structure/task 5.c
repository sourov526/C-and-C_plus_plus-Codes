#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int p,q,r;
    struct Node *P;
};

void printlist(struct Node* n)
{
    while (n != NULL)
    {
        printf("%d %d %d",data->p,data->q,data-r);
        n = n->next;
    }
}

int main()
{
    struct Node *data = (struct Node*) malloc(sizeof(struct Node));
    data->p = 1;
    data->q = 3;
    data->r = 4;
    data->P = NULL;
    printlist(p);
    return 0;
}


