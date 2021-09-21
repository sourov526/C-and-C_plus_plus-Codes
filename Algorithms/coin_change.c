#include<stdio.h>

void FindCoins(int cost, int coins[],int m)
{
    int coinList[30]= {0};
    int i,j=0;
    for(i=m-1; i>=0; i--)
    {
        while(cost >= coins[i])
        {
            cost = cost - coins[i];
            coinList[j++]=coins[i];
        }

    }
    for(i = 0; i<j; i++)
    {
        printf("%d ",coinList[i]);
    }
    printf("\nTotal coins : %d", j);
}

int main()
{
    int m;
    printf("Number of coins : ");
    scanf("%d",&m);
    printf("Enter Coins : ");
    int i, coins[10];
    for(i=0; i<m; i++)
    {
        scanf("%d",&coins[i]);
    }
    int k,l,temp=0;
    for(k=0; k<m-1; k++)
    {
        for(l=0; l<m-k-1; l++)
        {
            if(coins[l]>coins[l+1])
            {
                temp = coins[l];
                coins[l] = coins[l+1];
                coins[l+1] = temp;
            }
        }

    }
    printf("Sorted coins : ");
    for(i=0; i<m; i++)
    {
        printf("%d ",coins[i]);
    }
    int n;
    printf("\nEnter the Value: ");
    scanf("%d",&n);

    printf("Following Coins for %d: ",n);
    FindCoins(n,coins,m);
    return 0;
}
