#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * reverse(char * arr,int n);
int main ()
{
    char arr1[100],arr2[100],arr3[100],arr4[100];
    char arr5={'\0'};
    gets(arr1);
    int i=0,n=0;
    while (arr1[i]!='\0')
    {
        if (arr1[i]==' ')
        {
            char *p=strcat(arr2,reverse(arr3,i-n-1));
            n=i+1;
            strncpy(arr3,arr5,100);
        }

        else
        {
            arr3[i-n]=arr1[i];
        }
        i++;
    }
    arr2[i]='\0';
    puts(arr2);   
}
char * reverse(char* arr,int n )
{
    for(int i=0;i<n/2;i++)
    {
        char temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
    arr[n]=' ';
    return arr;
}