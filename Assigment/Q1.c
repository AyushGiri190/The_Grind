#include<stdio.h>
#include<limits.h>
float  median(int n,int arr[n]);
int range(int n ,int arr[n]);
int main()
{
    int n;
    printf(" How many values: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Observations :\n");
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float  med=median(n,arr);
    int rang=range(n,arr);
    if (n%2==0)
    {
        printf("The median is : %0.1f\n",med);
        printf("The range is : %d",rang);
    }
    else
    {
        printf("The median is : %d\n",(int)med);
        printf("The range is : %d",rang);
    }
}
float  median(int n,int arr[n])
{
    for (int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
    if (n%2==1)
    {
        float x=(float)arr[(n-1)/2];
        return x;
    }
    else
    {
        float c=(float)(arr[n/2-1]+arr[n/2])/2;
        return c;
    }  
}
int range (int n ,int arr[n])
{
    int x= INT_MIN;
    int c=INT_MAX;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>x)
            x=arr[i];
        if (arr[i]<c)
            c=arr[i];
    }
    return x-c;
}