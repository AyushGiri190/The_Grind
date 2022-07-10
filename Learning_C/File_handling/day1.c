#include<stdio.h>
int main ()
{
    FILE *ptr=NULL;//FILE type pointer is generally used for defining pointer for files
    char str[100]="This is my world";
    ptr=fopen("E:\\Gittie\\The_Grind\\Learning_C\\File_handling\\abcd.txt","r");
    //fscanf(ptr,"%[^\n]s",str);//this is storing the line read from the file in variable str
    //puts(str);
    //fprintf(ptr,"%s",str);//Writing the string str
    printf("%",*ptr); 
    fclose(ptr);
}