#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int x=0,i=0,z;
    int l=strlen(s);
    while (i<=l)
    {
        if (s[i]==' '|| s[i]=='\0')
        {
            z=i-1;
            for (int j=0;j<=(z-x)/2;j++)
            {
                char temp=s[x+j];
                s[x+j]=s[z-j];
                s[z-j]=temp;
            }
            x=i+1;
        }       
        i++;
    }
    puts(s);
}