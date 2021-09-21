#include<stdio.h>
int main()
{
    int i,n,key;
    printf("Enter Array size and elements: ");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Enter the key: ");
    scanf("%d",&key);
    int low=0,high=5;
    int mid,f=0;
    mid = (low+high)/2;
    while(low<=high)
    {
        if(a[mid]==key)
        {
            f = 1;
            printf("found");
            break;
        }
        else if(a[mid]>key)high=mid-1;
        else low = mid+1;
    }
    if(f==0)printf("Not Found");
    return 0;
}
