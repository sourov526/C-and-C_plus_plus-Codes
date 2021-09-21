#include<stdlib.h>
struct person
{
    int data;
    struct person *pt;
};
typedef struct person something;
int main()
{
    something *m;
    m =(something* )malloc(sizeof(something));
    m->data = 10;
    m->pt = NULL;
    printf("\n%d\n",m->data);
    printf("\n%p\n",m->pt);
    return 0;


}
