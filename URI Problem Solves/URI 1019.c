#include<stdio.h>
int main()
{
    int n,m,s,h;
    scanf("%d",&n);
    m = n/60;
    s = n%60;
    h = 0;
    if(m>60)
    {
       h = m/60;
       m = m%60;

    }

    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
