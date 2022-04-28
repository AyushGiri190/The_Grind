#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d %d",&r1,&c1);
    int input_arr[r1][c1],ouput_arr[c1][r1];
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&input_arr[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            ouput_arr[j][i]=input_arr[i][j];
        }
    }
    for (int i=0;i<c1;i++)
    {
        for(int j=0;j<r1;j++)
        {
            printf("%d ",ouput_arr[i][j]);
        }
        printf("\n");
    }
}