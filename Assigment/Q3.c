#include<stdio.h>
float calculate (int n ,float  arr[n]);
int main()
{
    int n;
    printf("Enter the number of items :");
    scanf("%d",&n);
    int arr1[n];
    float arr2[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the item number and price :");
        scanf("%d %f",&arr1[i],&arr2[i]);
    }
    float result=calculate (n,arr2);
    printf("Total cost of the inevntory :Rs %0.2f",result);
}
float calculate (int n ,float arr[n])
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}