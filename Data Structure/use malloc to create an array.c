#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n,i;
    n = 5;

    p = (int*)malloc(n*sizeof(int));
    if(p == NULL)
    {
        printf("Dynamically memory allocation unsuccessful.\n");
    }
    else
    {

        for( i = 0; i<n; i++)
        {
            p[i] = i;
            printf("%d ",p[i]);
        }


    }
    getch();
}
