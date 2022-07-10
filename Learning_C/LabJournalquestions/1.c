#include<stdio.h>
void main ()
{
    int n,K,g=0,l=0;
    scanf("%d",&n);
    int arr[n];
    for(int count=0;count<n;count++)
    {
        scanf("%d",&arr[count]);
    }
    scanf("%d",&K);
    for (int x=0;x<n;x++)
    {
        if (arr[x]>K)
        {
            g++;
        }
        else
            l++;
    }
    printf("Greater than :%d ",g);
    printf("Less Than or equal to :%d",l);
}