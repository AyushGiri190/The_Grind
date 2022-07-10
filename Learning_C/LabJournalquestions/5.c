#include<stdio.h>
#include<stdlib.h>

void main ()
{
    char s1[100],s2[100],s3[200];
    gets(s1);
    gets(s2);
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++;
    }
    s3[i]=' ';
    while (s2[j]!='\0')
    {
        s3[i+j+1]=s2[j];
        j++;
    }
    puts(s3);
    
    
}