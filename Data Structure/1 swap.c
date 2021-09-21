#include<stdio.h>
int swaping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int num1,num2,result;
    printf("Enter first number1: ");
    scanf("%d",&num1);
    printf("Enter second number2: ");
    scanf("%d",&num2);
    result = swaping(&num1,&num2);
    printf("After Swaping \n Number1 = %d\n Number2 = %d\n", num1,num2);
    return 0;





}
