#include<stdio.h>
void  swapper(int *p,int r,int c );
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    swapper((int *)arr,r,c);
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }  
    
  
}
void  swapper(int *p,int r,int c )
{
    for (int i=0;i<r;i++)
    {  
        int *s=(int *)p;

        s=(s+(i*3));
        for (int j=0;j<c;j++)
        {
            if (i<j)
            {
               int temp=*(s+j);
               *(s+j)=*(p+j*3+i);
               *(p+j*3+i)=temp;
            }
        }
    }
}