#include<stdio.h>
int add(int *p,int *q)
{
    return *p + *q;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum = %d",add(&a,&b));
    return 0;
}
