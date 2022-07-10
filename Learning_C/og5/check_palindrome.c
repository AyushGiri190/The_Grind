#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
    int c=strlen(str);
    int flag =0,j=0;
    while (j<c/2)
    {
        if( !(str[j]>='a'&& str[j]<='z'))
        {
            j++;
        }
        if( !(str[l]>='a'&& str[l]<='z'))
        {
            l--;
        }
        if (str[j]!=str[l])
        {
            flag =1;
            break;
        }
        j++;
        l--;
    }
    if (flag==1)
    {
        printf("Not a palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}