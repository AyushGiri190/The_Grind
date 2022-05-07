#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char s[50];
    gets(s);
    int i=0;
    while (s[i]!='\0')
    {
        ++i;
    }
    --i;
    for(int j=0;j<(i+1)/2;++j)
    {
        char temp=s[j];
        s[j]=s[i-j];
        s[i-j]=temp;
    }
    puts(s);
    

}