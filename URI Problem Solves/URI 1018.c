#include<stdio.h>
int main()
{
    int i,n;

    int arr[7]={100,50,20,10,5,2,1};
    int brr[7];
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0; i<7; i++)
    {
        brr[i]=n/arr[i];
        n=n%arr[i];
    }
    for(i=0; i<7; i++)
    {
        printf("%d nota(s) de R$ %d,00\n",brr[i],arr[i]);
    }
    return 0;

}
