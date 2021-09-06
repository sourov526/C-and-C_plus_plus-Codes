#include<stdio.h>
void swap(int *a,int *b)
{

    int tmp;
    tmp = *a;
    *a=*b;
    *b=tmp;
}

int main()
{

    int n1,n2;
    printf("Input 1st variable : ");
    scanf("%d",&n1);
    printf("Input 2nd variable : ");
    scanf("%d",&n2);

    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
    swap(&n1,&n2);

    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
    return 0;
}


