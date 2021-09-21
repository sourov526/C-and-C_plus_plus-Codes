#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[20];
   char str2[20];

   strcpy(str1, "book");
   printf("String1 : %s\n", str1);

   strcpy(str2, "Banana");

   printf("String2 : %s\n", str2);

   getch();
}
