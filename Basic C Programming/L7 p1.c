#include<stdio.h>
int funny()
{
    printf("This is user define function");
}
int main()
{
    printf("This is a main function\n\n");

    int a;
    scanf("%d",&a);
    if(a==1)
    {
        funny();
    }
    else
    {
        printf("Wrong Input\n");
    }

    getch();

}
