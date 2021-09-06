#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max = array[0];
    int min = array[0];
    for(i=0; i<n; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
        if(array[i]<min)
        {
            min = array[i];
        }
    }
     printf("Max = %d\n",max);
     printf("Min = %d\n",min);
        return 0;

}
