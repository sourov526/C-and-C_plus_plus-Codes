#include<stdio.h>
#include<string.h>
int main()
{

    char n;
        printf("Enter  Your Grade (A,B,C,D)");
        scanf("%c",&n);
         switch(n)
    {

    case'A':
        printf("you are excellent\n");
        break;
    case'B':
        printf("you are very good\n");
        break;
    case'C':
        printf("you passed\n");
        break;
    case'D':
        printf("you failed\n");
        break;
    default:
        printf("Wrong input\n");
        break;
    }
    return 0;

}
