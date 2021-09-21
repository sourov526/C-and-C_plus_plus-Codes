#include <stdio.h>

struct student{
    int data;
    struct student * pt;
};

typedef struct student something;

int main(){
    something *t;
    t = (something* ) malloc(sizeof(something));
    t->data = 10;
    t->pt = NULL;
    printf("\n%d\n\n", t->data);
    printf("\n%p\n\n", t->pt);
    //---

}
