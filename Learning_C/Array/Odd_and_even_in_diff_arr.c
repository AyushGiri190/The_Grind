// Create two new array for even and odd  number in array 
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int input_arr[n],even_arr[n],odd_arrr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
        even_arr[i]=-1;
        odd_arrr[i]=-1;
    }
    for (int i=0;i<n;i++)
    {
        if (input_arr[i]%2==0)
        {
            even_arr[i]=input_arr[i];
            odd_arrr[i]=0;
        }
        else
        {
            odd_arrr[i]=input_arr[i];
            even_arr[i]=0;
        }
    }
    for (int i=0;i<n;i++)
    {
        if(even_arr[i]!=0)
            printf("%d ",even_arr[i]);
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        if(odd_arrr[i]!=0)
            printf("%d ",odd_arrr[i]);
    }
}