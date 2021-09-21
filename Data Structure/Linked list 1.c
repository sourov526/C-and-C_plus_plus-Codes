#include<stdio.h>
#include<stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;

}node;

void insert(node *s,int data)
{
    while(s->next != NULL)
    {
        s = s->next;
    }
    s->next->data = data;
    s->next->next = NULL;
}

void display(node *s)
{
    while(s->next != NULL)
    {
        printf("%d\n",s->next->data);
        s = s->next;
    }
}

void search(node *s, int data)
{
    int count = 0;
    while(s->next != NULL)
    {
        if (s->next->data == data)
        {
             count++;
        }
         s = s->next;
    }
    printf("Total %d results found",count);

}

void deletenode(node *s, int data)
{
    while(s->next != NULL)
    {
        if (s->next->data == data)
        {
            s->next = s->next->next;
            return 0;
        }
        s = s->next;
    }
}

void main()
{
    node *first = (node*) malloc(sizeof(node));
    first->next = NULL;

    insert(first,5);
    insert(first,9);
    insert(first,11);
    insert(first,4);

    display(first);

    search(first, 9);

}





