#include<stdio.h>
int main()
{
    int i,n;
    printf("How many number you need:");
    scanf("%d",&n);
    int arr1[50],arr2[50];
    printf("Enter the array value:");

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr1[i]);
        }
        for(i=0; i<n;i++)
        {
             printf("arr1[%d] = %d\n",i,arr1[i]);

        }
        printf("\n\nValue of array2:\n\n");
         for(i=0; i<n;i++)
        {
            arr2[i] = arr1[i];

        }
         for(i=0; i<n;i++)
        {
             printf("arr2[%d] = %d\n",i,arr2[i]);

        }

        getch();


}
