#include<stdio.h>
int main()
{
    int salary ;

    printf("Enter The Amount ? \n");
    scanf("%d", &salary);

    //Coded By Risfat
//here im using nested if else statement and && logical oparators

    if (salary>=100000)
    {
        printf("Executive Manager");

    }
    else
        if (salary>=50000 && salary<100000)
    {
        printf("Manager");
    }
    else
        if (salary>=30000 && salary<50000)
        {
        printf("Officer Grade 1");
    }
    else
        if (salary>=20000 && salary<300000)
        {
        printf("Officer Grade 2");
    }
    else
        if (salary>=10000 && salary<20000)
        {
        printf("Staff");

        }

return 0;

}

