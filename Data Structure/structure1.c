#include<stdio.h>
struct person
{
    char name[30];
    int salary;
    int age;


};
int main()
{
    struct person person1,*p;
    printf("Enter Person Name: ");
    scanf("%s",person1.name);
    printf("Enter the Salary : ");
    scanf("%d",&person1.salary);
    printf("Enter Age: ");
    scanf("%d",&person1.age);
    p = &person1;
    printf("\nPerson information \n");

    printf("\nName = %s\n",p->name);
    printf("Salary =  %d\n",p->salary);
    printf("Age = %d\n",p->age);
}
