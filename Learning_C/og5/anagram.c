#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    int l1=strlen(s1),flag=1;
    int l2=strlen(s2);
    if (l1!=l2)
    {
        flag=0;
    }
    else
    {
        for(int i=0;i<l1-1;i++)
    {
        for (int j=0;j<l1-1-i;j++)
        {
            if (s1[j]>s1[j+1])
            {
                char temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<l2-1;i++)
    {
        for (int j=0;j<l2-1-i;j++)
        {
            if (s2[j]>s2[j+1])
            {
                char temp=s2[j];
                s2[j]=s2[j+1];
                s2[j+1]=temp;
            }
        }
    }    
        for (int i=0;i<l1-1;i++)
        {
            if (s1[i]!=s2[i])
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==0)
        printf("NOT ANAGRAM");
    else
        printf("ANAGRAM");
}