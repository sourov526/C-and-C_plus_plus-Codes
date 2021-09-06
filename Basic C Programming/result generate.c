#include<stdio.h>
int main()
{
    int avgmark;
    printf("Enter the avg mark:");
    scanf("%d",&avgmark);
    if(avgmark>=80 && avgmark<=100)
    {
        printf("point: 4.00\ngrade: A+");
    }
    else if(avgmark>=75 && avgmark<=79)
    {
        printf("point: 3.75\ngrade: A");
    }
    else if(avgmark>=70 && avgmark<=74)
    {
         printf("point: 3.50\ngrade: A-");

    }
    else if(avgmark>=65 && avgmark<=69)
    {
       printf("point: 3.25\ngrade: B+");

    }
      else if(avgmark>=60 && avgmark<=64)
    {
       printf("point: 3.00\ngrade: B");

    }
     else if(avgmark>=55 && avgmark<=59)
    {
       printf("point: 2.75\ngrade: B-");

    }
     else if(avgmark>=50 && avgmark<=54)
    {
       printf("point: 2.50\ngrade: C+");

    }
    else if(avgmark>=45 && avgmark<=49)
    {
       printf("point: 2.25\ngrade: C");

    }
     else if(avgmark>=40 && avgmark<=44)
    {
       printf("point: 2.00\ngrade: D");

    }
     else if(avgmark>=0 && avgmark<=39)
    {
       printf("point: 0.00\ngrade: F");

    }
    return 0;
}

