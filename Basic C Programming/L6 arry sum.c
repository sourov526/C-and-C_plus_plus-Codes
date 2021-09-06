#include<stdio.h>
int main()
{
    int i,n;
    printf("Emter array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("array[%d]=%d\n",i,arr[i]);
    }
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d\n",sum);
    return 0;

}
