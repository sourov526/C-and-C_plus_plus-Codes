#include <stdio.h>
int main()
{
int i, arr[100];
int j = 0;
for(i=1; i<=100; i++)
{
arr[j] = i;
j++;
}
for(i=0; i<100; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
