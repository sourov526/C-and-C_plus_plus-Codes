#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);

     if(n>=0 && n<=400.00)
    {
        printf("Novo salario: %.2f\n",(n+(n*15)/100));
        printf("Reajuste ganho: %.2f\n",((n*15)/100));
        printf("Em percentual: 15 %\n");

    }
      else if(n>400.00 && n<=800.00)
    {
        printf("Novo salario: %.2f\n",(n+(n*12)/100));
        printf("Reajuste ganho: %.2f\n",((n*12)/100));
        printf("Em percentual: 12 %\n");

    }
      else if(n>800.00 && n<=1200.00)
    {
        printf("Novo salario: %.2f\n",(n+(n*10)/100));
        printf("Reajuste ganho: %.2f\n",((n*10)/100));
        printf("Em percentual: 10 %\n");

    }
      else if(n>1200.00 && n<=2000.00)
    {

        printf("Novo salario: %.2f\n",(n+(n*7)/100));
        printf("Reajuste ganho: %.2f\n",((n*7)/100));
        printf("Em percentual: 7 %\n");
    }
     else if(n>2000.00)
    {

        printf("Novo salario: %.2f\n",(n+(n*4)/100));
        printf("Reajuste ganho: %.2f\n",((n*4)/100));
        printf("Em percentual: 4 %\n");
    }
    return 0;
}
