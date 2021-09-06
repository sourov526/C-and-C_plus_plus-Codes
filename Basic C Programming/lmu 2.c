#include<stdio.h>
int var1;
int main()
{
    char var2;
    scanf("%d%c",&var1,&var2);
    printf("%d from global scope\n",var1);
    printf("%c from local scope\n",sizeof(var2));
    return 0;
}
