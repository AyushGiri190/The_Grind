#include<stdio.h>
void diagonal(int r, int c,int *p);
int main ()
{
    
    int r,c;
    printf("Enter the order  :");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the Elements   :");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    diagonal(r,c,(int *)arr);
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void diagonal(int r, int c,int *p)
{
    
    for(int i=0;i<r;i++)
    {
        int *s=(int *)p;
        s=s+i*3;
        for (int j=0;j<c;j++)
        {
            if (i==j || (i+j)%2==0)
            {
                *(s+j)=0;
            }
        }
    }
}