#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,wh;
    float pph,salary;
    scanf("%d%d%f", &number, &wh, &pph);
    salary = wh*pph;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}
