#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val[3]={60, 100, 120};
    int wt[3]={10, 20, 30};
    int item=3;
    int w=50;  //capacity
    int table[item+1] [w+1];
    for(int i=0; i<item+1; i++) table[i] [0]=0; //row 0
    for(int i=0; i<w+1; i++) table[0] [i]=0; //col 0

    for(int i=1; i<item+1; i++)
    {
        for(int j=1; j<w+1; j++)
        {
            if(wt[i-1]<=j)
            {
                int p = table[i-1] [j];
                int q = val[i-1]+table[i-1] [j-wt[i-1]];

                if(p>=q) table[i] [j] = p;
                else table[i] [j]=q;
            }
            else table[i] [j]=table[i-1] [j];
            if(j%10 == 0)printf("%d  ",table[i] [j]);
        }
        printf("\n");
    }
    printf("\nThe maximum value : %d", table[item][w]);
    return 0;

}
