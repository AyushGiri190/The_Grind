#include<stdio.h>
int main()
{
    int c1,r1,flag=1;
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
        for (int j=0;j<c1;j++)
        {
            if (i>j && input_arr[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("No");
    }
}