#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d+%d+%d = %d\n",a,b,c,a+b+c);
    printf("to know avg enter 1:");
    int x;
    scanf("%d",&x);
    if(x == 1) goto avg;
    float avg;
    avg:
    avg = (a+b+c)/(3*1.0);
    printf("average = %.2f",avg);
    return 0;
}
