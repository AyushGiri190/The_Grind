#include<stdio.h>
int main()
{
    int n,max=0,min;
    scanf("%d",&n);
    int input_arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
        if (input_arr[i]>max)
            max=input_arr[i];
    }
    min=max;
    for(int i=0;i<n;i++)
    {
        if (input_arr[i]<min)
            min=input_arr[i];
    }
    printf("%d %d",max,min);
    return 0;
}