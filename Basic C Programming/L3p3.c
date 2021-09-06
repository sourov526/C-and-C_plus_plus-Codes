#include<stdio.h>
int var1 = 70;/*global variale*/
int main()
{
    int var2 = 3; /*local variable*/
    printf("%d is a data of global varialbe\n",var1);
    printf("%d is a data of local varialbe\n",var2);
    return 0;
}
