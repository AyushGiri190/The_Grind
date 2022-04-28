#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d ",&n,&m);
    int input_arr[n],input_arr2[m],output_arr[n+m];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    for (int i=0;i<m;i++)
    {
        scanf("%d",&input_arr2[i]);
    }
    for (int i=0;i<n+m;i++)
    {
        if (i<n)
            output_arr[i]=input_arr[i];
        else
            output_arr[i]=input_arr2[i-n];
    }
    for (int i=0;i<n+m;i++)
        printf("%d ",output_arr[i]);
}