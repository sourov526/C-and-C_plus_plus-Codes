#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number to print table:");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        printf("%d*%d = %d\n",n,i,n*i);
    }
    return 0;
}
