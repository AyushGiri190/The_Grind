#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for (int k=0;k<t;k++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char arr1[n][m];
        int cost1=0,cost2=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                scanf("%c", &arr1[i][j]);
            }
        }
        for ( int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (((i+j)%2==0)&& (arr1[i][j]!='R'))
                {
                    cost1+=3;
                }
                if (((i+j)%2==1)&& (arr1[i][j]!='G'))
                {
                    cost1+=5;
                }
                if (((i+j)%2==0)&&( arr1[i][j]!='G'))
                {
                    cost2+=5;
                }
                if (((i+j)%2==1)&& (arr1[i][j]!='R'))
                {
                    cost2+=3;
                }  
            }
        }
        cost1<cost2?printf("%d\n",cost1):printf("%d\n",cost2);
    }
    return 0;
}