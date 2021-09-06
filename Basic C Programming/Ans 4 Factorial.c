#include<stdio.h>
int main()

{
    int i,sum=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum*=i;
    }
    printf("%d! = %d\n",n,sum);
}
