#include <stdio.h>
#define COINS 10

int coins[COINS] = { 1, 2, 5, 10, 20,
                     50, 100, 200, 500,1000
                   };

void findMin(int cost)
{
    int coinList[100] = { 0 };
    int i, k = 0;

    for (i = COINS - 1; i >= 0; i--)
    {
        while (cost >= coins[i])
        {
            cost -= coins[i];
            coinList[k++] = coins[i];
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", coinList[i]);
    }
    printf("\nTotal Coins: %d",k);
    return;
}

int main(void)
{
    printf("Enter the value you want to change to coin : ");
    int n;
    scanf("%d",&n);

    printf("Following is minimum number"
           "of change for %d: ",n);
    findMin(n);
    return 0;
}

