#include <stdio.h>
int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
printf("Sum = %d\n", a+b+c);
printf("To know average enter 1:");
int x;
scanf("%d", &x);
if(x==1) goto avg;
float av;
avg:
av = (a+b+c)/(3*1.0);///for typecasting
printf("Average = %.2f\n", av);
return 0;
}
