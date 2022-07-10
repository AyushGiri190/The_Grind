#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    gets(s);
    int i=0;
    while (s[i]!='\0')
    {
        if (s[i]==' ')
            s[i]='5';
        else if (s[i]>='A'&& s[i]<='Z')
        {
            if(s[i]=='X')
                s[i]='A';
            else if(s[i]=='Y')
                s[i]='B';
            else if (s[i]=='Z')
                s[i]='C';
            else
                s[i]=s[i]+3;

        }
        i++;
    }
    puts(s);
}