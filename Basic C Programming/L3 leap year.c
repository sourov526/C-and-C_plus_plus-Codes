#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(((n%4 == 0) && (n%100!= 0)) || (n%400 == 0))
    {
      printf("%d is leap year",n);
    }

    else
    {
       printf("%d is normal year",n);
    }
    return 0;
}
