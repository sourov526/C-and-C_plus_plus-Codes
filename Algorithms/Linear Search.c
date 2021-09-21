#include<stdio.h>
int main()
{
   int i,n,key,a[100],f=0;
   printf("Enter Array Length: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter Search key: ");
   scanf("%d",&key);
   for(i=0;i<n;i++)
   {
       if(a[i]==key)
       {
           f=1;
           printf("Found at : %d Location",i);
           break;
       }
   }
   if(f==0)
   {
       printf("Not Found");
   }

}

