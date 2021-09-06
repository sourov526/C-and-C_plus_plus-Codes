#include<stdio.h>
int main() {
    int i, j, n;
    for (i=3; i>=1; --i)
        {
        for (n=0; n<3-i; n++)
            printf("  ");
        for (j=i; j<=2*i-1; ++j)
            printf("* ");
        for (j=0; j<i-1; ++j)
            printf("* ");
        printf("\n");
        }
    return 0;
}
