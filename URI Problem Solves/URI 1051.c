#include<stdio.h>
int main()
{
    float n,a;
    scanf("%f",&n);
    if(n<=2000.00)
    {
        printf("Isento\n");
    }
    if(n>2000.00 && n<3000.00)
    {
       a= n-2000.00;
       printf("R$ %.2f\n",(a*8)/100);
    }
    else if(n>3000.00 && n<=4500.00)
    {
       a= n-3000.00;
       printf("R$ %.2f\n",((a*18)/100)+80.00);
    }
    else if(n>4500.00)
    {
        a = n-4500.00;
        printf("R$ %.2f\n",((a*28)/100)+350);
    }
    return 0;

}
