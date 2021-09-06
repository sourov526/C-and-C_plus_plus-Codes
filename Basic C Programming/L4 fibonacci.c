#include<stdio.h>
int main()
{
    int f=0,s=1,n,fibo,i;
    scanf("%d",&n);
    printf("%d%d",f,s);
    for(i=2;i<=n;i++){
        fibo=f+s;
        f=s;
        s=fibo;
        printf("%d",fibo);
    }
    printf("\n");
    return 0;
}
