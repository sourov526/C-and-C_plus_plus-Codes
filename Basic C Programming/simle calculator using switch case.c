#include<stdio.h>
#include<string.h>
int main()
{
    char operator;
    double a,b;
    printf("Enter an operator(+,-,*,/) : ");
    scanf("%c%lf%lf",&operator,&a,&b);
    switch(operator)
    {
      case'+':
        printf("(%.2lf+%.2lf) = %.2lf\n",a,b,(a+b));
        break;
      case'-':
        printf("(%.2lf-%.2lf) = %.2lf\n",a,b,(a-b));
        break;
      case'*':
        printf("(%.2lf*%.2lf) = %.2lf\n",a,b,(a*b));
        break;
      case'/':
        printf("(%.2lf/%.2lf) = %.2lf\n",a,b,(a/b));
        break;
    }
    return 0;



}
