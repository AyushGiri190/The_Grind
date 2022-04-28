#include<stdio.h>
int b_check(int n,int arr[n],int search);
int main()
{
    int n;
    printf("Enter the number of element in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched ");
    int search ;
    scanf("%d",&search);
    int result =b_check(n,arr,search);
    printf("%d",result);
}
int b_check(int n,int arr[n],int search)
{
    int c=-1;
    for (int i=0;i<n;i++)
    {
        if (arr[i]==search)
        {
            c=i;
            break;
        }
    }
    return c;
}