#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[100],sign,s1[100];
    gets(s);
    int i=0,brack=0;
    while (s[i]!='\0')
    {
        if (s[i]=='(')
        {
            brack++;
            int j=i+1;
            sign=s[i-1];
            if (sign=='-')
            {
                while (s[j]!=')')
                {
                    if( s[j]=='+')
                        s1[j-brack]='-';
                    else if ( s[j] =='-')
                        s1[j-brack]='+';
                    else
                        s1[j-brack]=s[j];
                    j++;
                   
                }
                brack++;
                puts(s1);
                i=j;
            }
            else if (sign=='+')
            {
                while(s[j]!=')')
                {
                    s1[j-brack]=s[j];
                    j++;
                }
                puts(s1);
                i=j;
                brack++;
            }
        }
        else if (s[i]!=')')
        {
            s1[i-brack]=s[i];
        }
        i++;
    }
    puts(s1);
}