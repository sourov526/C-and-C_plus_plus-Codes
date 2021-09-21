#include<stdio.h>
int main()
{

    int N,M;
    N = 12;


    int arr[][2] = {{1,2}{1,3}{1,4}{2,5}{2,6}{4,7}{4,8}{5,9}{5,10}{7,11}{7,12}};
    M = 11;

    int adj[N+1][N+1];

    for(int i = 0; i<N+1; i++)
    {
        for(int j = 0; j<N+1; j++)
        {
            adj[i][j] = 0;
        }
    }

    for(int i = 0; i<M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];

        adj[x][y] = 1;
        adj[y][x] = 1;
    }

    for(int i = 1; i<N+1; i++)
    {
        for(int j = 1; j<N+1; j++)
        {
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
}

