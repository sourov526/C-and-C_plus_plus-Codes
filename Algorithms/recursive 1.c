#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    dis(n);
    return 0;
}
void dis(int num)
{
    if(num)
        dis(num-1);
    else
        return;
    printf("\n%d\n",num);
}
