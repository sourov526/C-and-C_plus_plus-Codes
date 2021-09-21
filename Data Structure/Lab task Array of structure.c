#include<stdio.h>

struct Employee
{
    int age;
    float salary;
};

typedef struct Employee Man;

int main()
{
    Man Person[4];
    int i;

    for(i = 0; i<4; i++)
    {
        printf("Enter information for Person %d\n",i+1);
        printf("Enter Age : ");
        scanf("%d",&Person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&Person[i].salary);
    }
    for(i = 0; i<4; i++)
    {
        printf("\n\nInformation for Person %d\n",i+1);
        printf("Enter Age : %d\n",Person[i].age);
        printf("Enter Salary : %.2f\n",Person[i].salary);
    }
    getch();
}
