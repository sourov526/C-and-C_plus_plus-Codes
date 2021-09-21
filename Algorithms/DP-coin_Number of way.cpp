#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[4] = {1,2,3};
    int n = 3;
    int amt = 5;
    int table[n+2][amt+2];

    for(int i = 0; i<=n; i++)table[i][0] = 1;
    for(int i=0; i<=amt; i++)table[0][i] = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j= 1; j<=amt; j++)
        {
            if (coin[i-1]>j)
            {
                table[i][j] = table[i-1][j];
            }
            else
            {
                table[i][j] = table[i][j-coin[i-1]] + table[i-1][j];
            }
            printf(" %d ",table[i][j]);
        }
        printf("\n");
    }
}
