#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if (y>=(x*1.07))
        {
            printf("Yes\n");
        }
        else
        printf("No\n");
    }
    return 0;
}