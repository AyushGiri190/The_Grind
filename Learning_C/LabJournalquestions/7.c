#include<stdio.h>
void main()
{
    char s1[100];
    gets(s1);
    int arr[26]={0};
    int i=0;
    while (s1[i]!='\0')
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            arr[s1[i]-65]=arr[s1[i]-65]+1;
        }
        else if(s1[i]>='a' && s1[i]<'z')
        {
            arr[s1[i]-97]=arr[s1[i]-97]+1;
        }
        i++;
    }
    for (int j=0;j<26;j++)
    {
        printf(" %c has occurence %d \n",j+65,arr[j]);
    }
}