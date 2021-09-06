#include<stdio.h>
int main()
{
    int i,j,k;
    i = 4;
    j = 5;
    k = 3;
    k = --i + ++j;
    i = k;
    j = --k + i++;
    printf("i = %d j = %d k = %d",i,j,k);
}
