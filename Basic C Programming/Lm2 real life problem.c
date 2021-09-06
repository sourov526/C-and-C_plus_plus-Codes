#include<stdio.h>
int main()
{
    int p,pen,ch;
    float a;
    scanf("%d%d%f%d",&p,&pen,&a,&ch);
    float price;
    price = (p*5)+(pen*1.5)+(a*2.5)+(ch*0.5);
    printf("total price = %.3f",price);
    return 0;
}
