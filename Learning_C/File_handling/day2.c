#include<stdio.h>
void main()
{
   
    FILE *ptr=fopen("abcd.txt","w+");
    char n[100],j[100];
    fgets(n,100,stdin); //getting input from stdin (keyboard) and storing in n
    fputs(n,ptr);// writing in file abcd the string n;
    fgets(j,100,ptr);
    fputs(j,stdout);
   

}