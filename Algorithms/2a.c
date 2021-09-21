#include <stdio.h>
void print(int ID, int count){
 if(ID < 0 || count == 2) return;
 printf("March Forward ID = %d\n",ID);
 print(ID%3,++count);
 printf("March Backward ID = %d\n",ID);
}
int main() {
 int ID;
 scanf("%d", &ID);
 // Value of ID is the last two digits value of your ID
 // For example if your ID is 191-15-1234 then ID = 34

 for(int i = 0, j = 10; i < j; i*=2,j-=6) {
 print(ID,0);
 printf("ReCuRrEcUr\n");
 }
}
