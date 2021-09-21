#include<stdio.h>

#define White 1
#define Gray 2
#define Black 3

int adj[100][100];
int color[100];

int node;
int edge;

int main()
{
    scanf("%d %d", &node, &edge);

    int n1, n2;
    for (int i = 0; i<edge; i++)
    {
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
}
