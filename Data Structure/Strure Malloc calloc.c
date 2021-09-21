#include <stdio.h>
#include <string.h>​
struct Goru
{
    int boyos;
    char nam[10];
    char rong[20];
};
int main()
{
    struct Goru goru1;
    struct Goru goru2;
    struct Goru goru3;​
    //Assigning data for Goru 1
    goru1.boyos = 12;
    strcpy(goru1.nam, "Lali");
    strcpy(goru1.rong, "Lal");
    printf("Name: %s\nColor: %s\nBoyos: %d\n",goru1.nam, goru1.rong, goru1.boyos);
​    //Assign data for Goru 2 and Goru 3 the same way as Goru 1
    //Your code goes here...
​
    return 0;
​
}
