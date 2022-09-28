#include<stdio.h>
void main ()
{
    int n1,n2,i=0,j=0,x=0,y=0;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr3[n1+n2];
    for (int x=0;x<n1;x++)
    {
        scanf("%d",&arr1[x]);
    }
    for (int x=0;x<n2;x++)
    {
        scanf("%d",&arr2[x]);
    }
    while (i<n1&&j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[i+j]=arr1[i];
            i++;
        }
        else
        {
            arr3[i+j]=arr2[j];
            j++;
        }
    }
    if (i==n1)
    {
       for (j;j<n2;j++)
       {
           arr3[i+j]=arr2[j];
       }
    }
    else
    {
        for (i;i<n1;i++)
       {
           arr3[i+j]=arr1[i];
       }
    }
    for (int k=0;k<n1+n2;k++)
    {
        printf("%d ",arr3[k]);
    }
}