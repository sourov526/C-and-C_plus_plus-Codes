#include<stdio.h>
int main()
{
    int i=10, n;
    printf("Enter the value of n:"),
    scanf("%d",&n);
    do
    {
        printf("            %d\n",i);
        i++;
    }
    while(i<=n);
}
