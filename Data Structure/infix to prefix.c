#include<stdio.h>
#include<string.h>
#define max 100
char stack[max];
int top=-1;
void push(char k){
if(top+1==max)
printf("Stack is full!");
else{
top++;
stack[top]=k;
}
}
char pop(){
char a;
if(top<0)
{
printf("Stack is empty\n");
return '\0';
}
else
{
a=stack[top];
top--;
return a;
}
}
int main()

{
int i,l;
char ch,e[max];
printf("Enter string with():");
gets(e);
l=strlen(e);
printf("Postfix is:\n");
for(i=0; i<=l-1; i++){
ch=e[i];
if(ch=='('||ch=='*'||ch=='-'||ch=='+'||ch=='/')
push(ch);
else if(ch!=')')
putchar(ch);
else{
do{
ch=pop();
if(ch!='(')
putchar(ch);
}
while(ch!='(');
}
}
return 0;
}
