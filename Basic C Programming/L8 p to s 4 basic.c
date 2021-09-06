#include<stdio.h>
void display(int x[])
{
  int i,sum=0;
for(i=0; i<5; i++)
{
    sum =sum+x[i];
}
printf("Total sum = %d\n",sum);

}

int main()
{
    int arr[]={5,2,6,4,8};
    display(arr);
    return 0;
}
