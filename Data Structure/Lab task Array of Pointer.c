#include<stdio.h>

struct employee
{
    int id;
    char name[10];
};

int main()
{
    struct employee *ptr[10];
    int i;

    printf("Enter the Employee Details : ");
    for(i=0; i<3; i++)
    {
        ptr[i] = (struct employee *)malloc(sizeof(struct employee));
        printf("\nEnter the Name : ");
        scanf("%s",&ptr[i]->name);
        printf("\nEnter the ID Number : ");
        scanf("%d",&ptr[i]->id);
    }

    printf("\n\nEmployee Details are : ");

    for(i=0; i<3; i++)
    {
        printf("\n\nName : %s",ptr[i]->name);
        printf("\nID Number : %d",ptr[i]->id);

    }

    getch();
}
