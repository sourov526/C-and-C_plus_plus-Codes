#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A<B)
    {
        A=A+B;
        B=A-B;
        A=A-B;
    }
    if(A<C)
    {
        A=A+C;
        C=A-C;
        A=A-C;
    }
    if(B<C)
    {
        B=B+C;
        C=B-C;
        B=B-C;
    }
    if(A  >= B+C)
        printf("NAO FORMA TRIANGULO\n");

    else if((A*A) == (B*B) + (C*C))
        printf("TRIANGULO RETANGULO\n");
    else if(A*A > B*B + C*C)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(A*A < B*B + C*C)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B && B==C)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B || A==C || B==C)
        printf("TRIANGULO ISOSCELES\n");
    return 0;

}
