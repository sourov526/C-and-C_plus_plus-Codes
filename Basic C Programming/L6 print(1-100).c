#include<stdio.h>
int main()
{
    int i,a[100];
    int j = 0;
    for(i=1; i<=100; i++)
    {
        a[j] = i;
         j++;
    }
    for(i=0; i<100; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
