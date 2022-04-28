#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d %d",&r1,&c1);
    int input_arr[r1][c1];
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c1;j++)
        {
            scanf("%d",&input_arr[i][j]);
        }
    }
    for (int i=0;i<r1;i++)
    {
        int sum=0;
        for (int j =0;j<c1;j++)
        {
            sum+=input_arr[i][j];
        }
        printf("Sum of %d row is %d \n",i,sum);
    }
}