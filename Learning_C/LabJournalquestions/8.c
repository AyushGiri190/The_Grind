#include<stdio.h>
void swap(int *ptr1,int *ptr2);
int main()
{
    int a,b;
    int *ptr1=&a;
    int *ptr2=&b;
    scanf("%d %d",ptr1,ptr2);
    swap(ptr1,ptr2);
    printf("Numbers swapped\n");
    printf("%d %d",*ptr1,*ptr2);
}
void swap(int *ptr1,int *ptr2)
{
    *ptr1= *ptr1+ *ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

}