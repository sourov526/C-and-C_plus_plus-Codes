#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    char roll[80];
    char section[50];
};
int main()
{
    struct student student1;
    struct student student2;
    struct student student3;
    //assigning data for student 1
    strcpy(student1.name,"Abesh");
    strcpy(student1.roll ,"193-15-13390");
    strcpy(student1.section,"O-14");
    printf("name:%s\nroll:%s\nsection:%s\n",student1.name,student1.roll,student1.section);
    //assigning data for student 2
    strcpy(student2.name,"mrittika");
    strcpy(student2.roll ,"193-15-13389");
    strcpy(student2.section,"O-14");
    printf("\nname:%s\nroll:%s\nsection:%s\n",student2.name,student2.roll,student2.section);
    //assigning data for student 3
    strcpy(student3.name,"shohidul");
    strcpy(student3.roll ,"193-15-13481");
    strcpy(student3.section,"O-14");
    printf("\nname:%s\nroll:%s\nsection:%s",student3.name,student3.roll,student3.section);
    return 0;
}

