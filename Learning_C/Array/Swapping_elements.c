#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int input_arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    if (n%2==1)
    {
        for (int i=0;i<(n+1)/2;i++)
        {
            int temp=input_arr[i];
            input_arr[i]=input_arr[n-1-i];
            input_arr[n-1-i]=temp;
        }
    }
    else
    {
        for (int i=0;i<n/2;i++)
        {
            int temp =input_arr[i];
            input_arr[i]=input_arr[n-1-i];
            input_arr[n-1-i]=temp;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",input_arr[i]);
    return 0;
}