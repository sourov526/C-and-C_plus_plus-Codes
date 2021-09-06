#include<stdio.h>
int main()
{

    float div,a,b;
    printf("Enter the value of a nad b:");
    scanf("%f%f",&a,&b);
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    div = *ptr1 / *ptr2;
    printf("Division = %.2f\n",(float)div);
}
