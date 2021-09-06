#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter the value of two num:");
    scanf("%d%d",&a,&b);
    x = (a>b)?a:b;
    printf("%d is large num\n",x);
    return 0;
}
