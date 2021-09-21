#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int left, int mid, int right)
{
    int left_arry[1000];
    int right_arry[1000];
    int left_index =mid-left+1;
    int right_index = right-mid;
    for(int i = 0; i<left_index; i++)left_arry[i]=a[left+i];
    for(int j = 0; j<right_index; j++)right_arry[j] = a[mid+1+j];
    int i=0,j=0;
    int temp = left;
    while(i<left_index && j<right_index)
    {
        if(left_arry[i]<=right_arry[j])
        {
            a[temp] = left_arry[i];
            i++;
        }
        else
        {
            a[temp] = right_arry[j];
            j++;
        }
        temp++;

    }
    while(i<left_index)
    {
        a[temp]=left_arry[i];
        i++;
        temp++;
    }
    while(j<right_index)
    {
        a[temp] = right_arry[j];
        j++;
        temp++;
    }
}
void print_array(int a[],int size)
{
    for(int i = 0; i<size; i++)
    {
        printf("%d",a[i]);
    }
}
void mergesort(int a[], int left, int right)
{
    if(left>=right)return;
    int mid = (left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,mid,right);

}

int main()
{
    int a[100],n;
    printf("how many numbers : ");
    scanf("%d",&n);
    for(int i = 0; i<n;i++)scanf("%d",&a[i]);
    mergesort(a,0,n);
    print_array(a,n);
    return 0;
}
