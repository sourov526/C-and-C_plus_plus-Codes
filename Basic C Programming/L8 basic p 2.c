#include<stdio.h>
int main()
{
    int a=7;
    int *ptr;
    ptr=&a;
    printf("Direct access = %d\n",a);
    printf("Indirect access = %d\n",*ptr);
    printf("Direct address = %d\n",&a);
    printf("Indirect address p %d\n",ptr);
}
