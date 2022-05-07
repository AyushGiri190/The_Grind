#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char arr1[50],arr2[50];
    gets(arr1);
    gets(arr2);
    int i=0,j=0;
    while (arr1[j]!='\0')
    {
        ++j;
    }
    arr1[j]=' ';
    ++j;
    
    while (arr2[i]!='\0')
    {
       
        arr1[j+i]=arr2[i];
        i++;
    }

    arr1[j+i]='\0';
    puts(arr1);

}