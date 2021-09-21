// Time complexity : O(n^2)
// Space Complexity : O(1)
#include<stdio.h>
int main()
{
    int a[]={8,4,1,3,2};
    int i,val,hole;
    for(i=1;i<5;i++)
    {
        val = a[i];
        hole = i;
        while(hole>0 && a[hole-1]>val)
        {
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole]=val;
    }
    printf("Sorterd Array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
