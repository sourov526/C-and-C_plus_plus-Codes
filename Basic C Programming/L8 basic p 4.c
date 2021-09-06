#include <stdio.h>
void Callfunction(int arr[], int n)
{
int i;
for(i=0;i<5;i++)
{
printf("Index = %d, Value = %d\n",i, (*arr+i));
}
}
int main()
{
int arr = {1,2,3,4,5};
/// call function
Callfunction(&arr, 5);
/* here 5 is the number of elements*/
return 0;
}
