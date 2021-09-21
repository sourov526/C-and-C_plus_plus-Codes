#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    char node;//we have to connect it with string_reverse() function

};
int string_reverse()
{
    char string[128], temp;
    int n, i, j;

    printf("\nEnter string: ");
    gets(string);

    n = strlen(string);

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("%s", string);
    printf("\n");

}
char insert ()
{

    int i, j = 0, k = 0,n = 0;
    int flag = 0;

    char str[100], neww[100], word[100];

    printf("Enter Any String to Remove a Word from String: ");
    gets(str);

    printf("\n\n Enter Any Word You Want to be Removed: ");
    gets(word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;

        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1;
                break;
            }
        }
    j = 0;

    if(flag == 0)
        i = k;
    else
        flag = 0;

    neww[n++] = str[i];
    }

    neww[n] = '\0';

    printf("\n\n After Removing Word From String: %s",neww);


}
