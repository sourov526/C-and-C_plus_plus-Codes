#include <stdio.h>
#include <limits.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
int w[100],v[100];
int Print_Table(int w[],int v[], int n, int V)
{
    int table[n + 1][V+1];
    int i,j;
    for(i=0; i<n + 1; i++)
    {
        table[i][0]=0;
    }
    for(j=0; j<V+1; j++)
    {
        table[0][j]=0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=V; j++)
        {
            if(w[i]<=j)
            {
                if( table[i-1][j] > (table[i-1][j-w[i]]+1) )
                    table[i][j]=table[i-1][j];
                else
                    table[i][j]=table[i-1][j-w[i]]+v[i];
            }
            else
                table[i][j]=table[i-1][j];
        }
    }
    for (i = 0; i <n + 1; i++)
    {
        for (j = 0; j <V+1; j++)
        {
            printf("%d ",table[i][j]);
        }
        printf("\n");
    }
    return table[n][V];
}
int main()
{
    printf("Input Total Capacity: ");
    int N;
    scanf("%d",&N);
    printf("\nInput the number of items : ");
    int s;
    scanf("%d", &s);
    int i;
    printf("input the item Weight and Value:");
    for(i=1; i<=s; i++)
    {
        printf("\nFor item no %d\n",i);
        scanf("%d %d",&w[i],&v[i]);
    }
    printf("\n");
    int output=Print_Table(w,v,s,N);
    printf("\nMaximum profit is %d \n", output);
    return 0;
}
