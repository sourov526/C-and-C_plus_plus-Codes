#include<stdio.h>
#include<string.h>
int main()
{
    char Name[3333];
    char Roll[13389];
    printf("Enter your Name\n",&Name);
    scanf("%s",&Name);
    printf("Enter your Roll\n",&Roll);
    scanf("%s",&Roll);

    if(strcmp(Name,"Nahida")==0)
        if(strcmp(Roll,"13389")==0)
 {
        printf("Login Success\n");

 }
 else
 {
    printf("wrong Id\n");
 }
 return 0;
}

