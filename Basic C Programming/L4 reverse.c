#include<stdio.h>
int main()
{
    int num,reverse=0,r,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r = temp%10;
        reverse = (reverse*10)+r;
        temp = temp/10;

    }
    printf("Reverse = %d\n",reverse);
    return 0;
}
