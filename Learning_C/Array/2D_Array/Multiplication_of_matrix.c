#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int input_arr[r1][c1],input_arr1[r2][c2],output_arr[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&input_arr[i][j]);
        }   
    }
      for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&input_arr1[i][j]);
        }
    }
    for ( int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            int element=0;
            for (int k=0;k<c1;k++)
            {
                element+=input_arr[i][k]*input_arr1[k][j];
            }
            output_arr[i][j]=element;
        }  
    }
    for (int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf("%d ",output_arr[i][j]);
        }
        printf("\n");
    }
    
}