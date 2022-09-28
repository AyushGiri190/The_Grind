#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(int l,char *str);
int main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
    reverse(l,str);
    printf("Reversed String is \n");
    puts(str);
}
void reverse(int l,char *str)
{
    int j=l;
    for (int i=0;i<j/2;i++)
    {
        char temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
}