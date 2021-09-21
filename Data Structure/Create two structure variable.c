#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    char id[30];
    int roll;
};
int main()
{
    struct Student student1;
    struct Student student2;
    strcpy(student1.name,"Sourov");
    strcpy(student2.name,"Tonmoy");
    strcpy(student1.id,"193-15-13526");
    strcpy(student2.id,"193-15-13485");
    student1.roll = 101;
    student2.roll = 102;
    printf("Student Information:\n\nName: %s\nID : %s\nRoll : %d\n\nName :%s\nID :%s\nRoll : %d",student1.name,student1.id, student1.roll,student2.name,student2.id,student2.roll);
    getch();


}
