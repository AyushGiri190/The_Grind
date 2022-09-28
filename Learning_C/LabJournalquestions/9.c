#include<stdio.h>
#include<math.h>
float standard_deviation(int n,int *arr);
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float x=standard_deviation(n,arr);
    printf(" The Standard deviation is -: %f",x);
}
float standard_deviation(int n,int *arr)
{
    float mean_sum=0,sum_sqaures=0;
    for (int i=0;i<n;i++)
    {
        mean_sum+=arr[i];
        sum_sqaures+=pow(arr[i],2);
    }
    mean_sum=pow(mean_sum/n,2);
    sum_sqaures=sum_sqaures/n;
    float standard=pow(sum_sqaures-mean_sum,0.5);
    return standard;
}