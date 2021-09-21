// Time complexity : O(n^2)
// Space Complexity : O(1)

#include<stdio.h>
int main()
{
    int a[] = {32,1,3,232,44,100,7};
    int i,j,min;
    for(i=0; i<7; i++)
    {
        min = i;
        for(j = i+1; j<7; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(i=0; i<7; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
