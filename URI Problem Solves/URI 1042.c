#include<stdio.h>
int main()
{
    int a,b,c,mini,mid,maxi;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        mini = a;
    if(b<c)
    {
        mid = b;
        maxi = c;
    }
    else
    {
        mid = c;
        maxi = b;
    }
    }
    else if(b<a && b<c)
    {
        mini = b;
        if(a<c)
        {
            mid = a;
            maxi = c;
        }
        else
        {
            mid = c;
            maxi = a;
        }
    }
    else
    {
        mini =c;
        if(a<b)
        {
            mid = a;
            maxi = b;
        }
        else
        {
            mid = b;
            maxi = a;
        }
    }
    printf("%d\n%d\n%d\n",mini,mid,maxi);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
