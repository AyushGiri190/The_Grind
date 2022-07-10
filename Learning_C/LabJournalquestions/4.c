#include<stdio.h>
void main()
{
    int c,r,flag=1;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (i>j && arr[i][j]!=0)
            {
                flag=0;
                break;
            } 
        }
    }
    if (flag ==1)
    printf("Upper triangular");
    else
    printf("Not upper triangular");
}