#include<stdio.h>
int multiplication(int a, int b,int c)
{
    int res;
    res = a*b*c;
    return res;
}
int main()
{
    int a,b,c,mul;
    scanf("%d%d%d",&a,&b,&c);
    mul =  multiplication(a,b,c);
    printf("Result = %d",mul);

}
