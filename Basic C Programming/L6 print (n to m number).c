#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter the value of m and n:");
    scanf("%d%d",&m,&n);
    int arr[n-m];
    for(i=0; i<n-m; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-m; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

}
