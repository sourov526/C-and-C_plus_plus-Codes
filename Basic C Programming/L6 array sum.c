#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

}
