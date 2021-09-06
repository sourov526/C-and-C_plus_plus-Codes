#include<stdio.h>
#include<string.h>
int main()
{
    char n,uppercase,lowercase;
    printf("Enter an Alphabet:");
    scanf("%c",&n);
    lowercase = ((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u'));
    uppercase = ((n=='A')||(n=='E')||(n=='I')||(n=='O')||(n=='U'));
    if(uppercase || lowercase)
    {
        printf("%c is vowel\n",n);
    }
    else
    {
        printf("%c is consonant\n",n);
    }
    return 0;


}
