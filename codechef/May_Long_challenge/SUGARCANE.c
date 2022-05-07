#include<stdio.h>
int main()
{
    int t;
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        n=n*50;
        float a=(float)n/0.3;
        float b=(float )n/0.2;
        printf("%d",(int)(n-(2*b)-a));
    }
    return 0;
}