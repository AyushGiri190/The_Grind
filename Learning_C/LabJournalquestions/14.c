#include<stdio.h>
void main()
{
    FILE *ptr1=fopen("first.txt","w+");
    FILE *ptr2=fopen("second.txt","w+");
    char d[100];
    do
    {
        fgets(d,100,stdin);
        fputs(d,ptr1);
    } while (*d !='\n');
    rewind(ptr1);
    int i;
    while ((i=fgetc(ptr1))!=EOF)
    {
        if (i!=' ')
        {
            fprintf(ptr2,"%c",i);
        }
    }
    rewind(ptr2);
    printf("The contents of the new file are\n");
    while((i=fgetc(ptr2))!=EOF)
    {
        printf("%c",i);
    }

    
}