#include<stdio.h>
int main()
{
    int var1;
    char var2;
    float var3;
    double var4;
    printf("taken by integer = %d bytes\n",sizeof(var1));
    printf("taken by character = %c bytes\n",sizeof(var2));
    printf("taken by float = %f bytes\n",sizeof(var3)),
    printf("takeb by double = %lf bytes\n",sizeof(var4));
    return 0;
}
