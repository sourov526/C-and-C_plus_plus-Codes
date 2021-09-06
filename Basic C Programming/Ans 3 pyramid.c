#include<stdio.h>
int main()
{
    int i, j, n;
    n=1;
    for(i=1;i<3*2;i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("* ");
        }
        if(i < 3)
        {
            n++;
        }
        else
        {
            n--;
        }
        printf("\n");
    }
    return 0;
}
