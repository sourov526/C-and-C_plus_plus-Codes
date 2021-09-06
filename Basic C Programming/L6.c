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
    return 0;

}
