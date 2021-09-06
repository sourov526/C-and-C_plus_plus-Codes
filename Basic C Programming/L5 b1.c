#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("This is the outer loop\n");

        for(j=1; j<=n; j++)
        {
          printf("This is the inner loop in this program\n");
        }
         printf("\n\n");
    }

}
