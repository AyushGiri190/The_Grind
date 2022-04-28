#include<stdio.h>
void display(int n,int a[n]);
void display2(int n ,int *p);
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    display(n,arr1);
    display2(n,arr2);
}
void display(int n,int a[n])
{
    a[0]=3434;
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void display2(int n,int *p)
{
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}