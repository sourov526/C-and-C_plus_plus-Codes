#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    double div;
    scanf("%d %d",&a,&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = (a/b);
    prinf("sum = %d\n sub = %d\n mul = %d\n mul = %.4lf",sum,sub,mul,div);
    return 0;

}
