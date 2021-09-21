#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    double ms,ts,total;
    scanf("%[^\n]", &name);
    scanf("%lf%lf", &ms, &ts);
    total = ms+(ts*0.15);
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}
