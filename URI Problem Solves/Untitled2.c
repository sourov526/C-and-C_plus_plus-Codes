#include<stdio.h>
int main()
{
    double x1,y1;
    scanf("%lf%lf\n",&x1,&y1);
    double x2,y2,distance;
    scanf("%lf%lf",&x2,&y2);
    distance = sqrt((x2-x1)^2+(y2-y1)^2));
    printf("%.4lf\n",distance);
    return 0;

}
