#include<stdio.h>
int main(){
    int arr[] = {-21,4,7,3,24,12};
    int i,j,size = 6;
    int swap;
    for(i=0; i<size-1; i++)
    {
        swap = 0;
        for(j=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                // swap two numbers
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap==0)
            break;
    }
    printf("\nSorted Array : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
