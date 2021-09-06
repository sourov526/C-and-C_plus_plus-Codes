#include<stdio.h>
int passarray(int arr[], int n)
{
    arr[2]=-5;
    arr[n-1]=-1;
}
int main()
{
    int n,i;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter ar least 5 elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("\n\n");
    printf("This is from main function: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    passarray(arr,n);
    printf("After inserting value from function: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    getch();

}
