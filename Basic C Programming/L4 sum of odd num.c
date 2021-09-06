#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        if(i%2==1)
        {
            sum = sum+i;
            i++;

        }
        printf("sum odd number of n = %d\n",sum);
    }


    while(i<=n);
    return 0;
}
