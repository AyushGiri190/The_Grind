#include<stdio.h>
void main()
{
    FILE *ptr=fopen("dump.txt","a+");
    fseek(ptr,-50,SEEK_END);
    char s[50];
    int j=0;
    char i;
    if (ptr==NULL)
        exit(0);
        while ((i=fgetc(ptr))!=EOF)
        {
            if(i==' ')
            {
                s[j]='$';
            }
            else
            {
                s[j]=i;
            }
            j++;
        }
        s[j]='\0';
        int k=0;
        fseek(ptr,-50,SEEK_END);
        while (s[k]!='\0')
        {
           fputc(s[k],ptr);
           k++;
        }

}