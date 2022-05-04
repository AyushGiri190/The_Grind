/*we need to calculate frequency of digit in an array of digit input */
#include<stdio.h>
int main ()
{
    int n ;
    scanf("%d",&n);
    int arr[n],arr1[10];
    int arr2[10]={0,1,2,3,4,5,6,8,9};
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++)
    {
        int count=0;
        for (int j=0;j<n;j++ )
        {
            if (arr[j]==arr2[i])
                count++;
        }
        arr1[i]=count;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",arr1[i]);
    }
}