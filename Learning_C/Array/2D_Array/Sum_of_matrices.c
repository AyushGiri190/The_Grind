#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if (r1==r2 && c1==c2)
    {
        int input_arr[r1][c1],input_arr1[r2][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&input_arr[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&input_arr1[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                input_arr[i][j]=input_arr[i][j]+input_arr1[i][j];
            }
        }
          for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ",input_arr[i][j]);
            }
            printf("\n");
        }
    }
}