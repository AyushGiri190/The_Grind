#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr =fopen("new.txt","w+");
    char d[100];
    if (ptr==NULL)
        exit(0);
    for(int i=0;i<3;i++)
    {
        do
        {
            fgets(d,100,stdin);
            fputs(d,ptr);
        }while (*d!='\n');
    }
    rewind(ptr);
    int v=0,c=0,i;
    while ((i=fgetc(ptr))!=EOF)
    {
        if(i>='A'&&i<='Z' || i>='a'&& i<='z')
        {
            if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
                v++;
            else
                c++;
        }
    }
    printf("Count of vowels are %d\n",v);
    printf("Count of consonants are %d",c);
    
}