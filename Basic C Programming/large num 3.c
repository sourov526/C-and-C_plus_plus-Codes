#include<stdio.h>
int main()
{
     int a,b,c;
     scanf("%d %d %d",&a, &b, &c);
     if((a>b) && (a>c))
     {
      printf("a is larger than b and c");
     }
     else if((b>a) && (b>c))
     {
      printf("b is larger than a and c");
     }
     else
     {
      printf("c is larger than a and b");
     }
     return 0;
}
