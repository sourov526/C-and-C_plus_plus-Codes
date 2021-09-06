#include<stdio.h>
int main()
{
    int c,d,sum;
    printf("Enter the value of c and d:");
    scanf("%d%d",&c,&d);
    int *a,*b;
    a=&c;
    b=&d;
    sum=*a+*b;
    printf("sum = %d\n",sum);
    getch();

}
