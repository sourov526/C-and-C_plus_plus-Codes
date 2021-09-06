#include <stdio.h>
int main()
{
int i, j, n;
scanf("%d", &n);
for(i=2;i<=n;i++)
{
int flag = 1;
for(j=2;j<=i-1;j++)
{
if(i%j==0)
{
flag = 0;
break;
}
}
if(flag==1)
printf("%d ", i);

}
}
