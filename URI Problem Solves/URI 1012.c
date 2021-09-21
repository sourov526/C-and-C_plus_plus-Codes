#include<stdio.h>
int main()
{
    double A,B,C,D,E,F,G,H;
    scanf("%lf%lf%lf",&A,&B,&C);
    D = ((A*C)/2);
    E = C*C*3.14159;
    F = (((A+B)/2)*C);
    G = B*B;
    H = A*B;
    printf("TRIANGULO: %.3lf\n",D);
    printf("CIRCULO: %.3lf\n",E);
    printf("TRAPEZIO: %.3lf\n",F);
    printf("QUADRADO: %.3lf\n",G);
    printf("RETANGULO: %.3lf\n",H);

    return 0;

}
