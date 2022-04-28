#include<stdio.h>
int main ()
{
    int r1,c1;
    scanf("%d %d",&r1,&c1);
    int input_arr[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&input_arr[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            if (i<j)
            {
                int temp=input_arr[i][j];
                input_arr[i][j]=input_arr[j][i];
                input_arr[j][i]=temp;
            }
        }
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            printf("%d ",input_arr[i][j]);
        }
        printf("\n");
    }
}