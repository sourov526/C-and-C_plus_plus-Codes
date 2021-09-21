#include<stdio.h>
int main()
{
    int n,y,m,d,s;
    scanf("%d",&n);
    y = n/365;
    s = n%365;
    m = s/30;
    d = s%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
