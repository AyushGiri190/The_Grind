#include<stdio.h>
void main()
{
    FILE *ptr=fopen("Sample.txt","w+");
    FILE *ptr1=fopen("Sample1.txt","w+");
    if (ptr==NULL)
        exit(0);
    char d[100],c[100];
    do
    {
        fgets(d,100,stdin);
        fputs(d,ptr);
    }while (*d!='\n');
    rewind(ptr);
    while (fscanf(ptr,"%s",c)!=EOF)
    {
        if (c[0]=='t'&&c[1]=='h'&& c[2]=='e'&& c[3]==0)
            continue;
        else if(c[0]=='a'&&c[1]=='n'&&c[2]==0)
            continue;
        else if (c[0]=='a'&& c[1]==0)
            continue;
        else
            fprintf(ptr1,c);
            fputc(32,ptr1);
    }
    fclose(ptr);
    
    
    
}