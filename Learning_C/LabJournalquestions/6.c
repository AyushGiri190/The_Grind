#include<stdio.h>
int comp(char *s1,char *s2);
void main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    if (comp(s1,s2))
    printf("Equal");
    else
    printf("Unequal");
}
int comp(char *s1,char *s2)
{
    int i=0,flag=1;
    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if (s1[i]!=s2[i])
        {
            flag =0;
            break;
        }
        i++;
    }
    return flag;
}