#include<stdio.h>
#include<math.h>
int is_prime(int n);
void main()
{
    FILE *ptr =fopen("Num.txt","a+");
    FILE *ptr1 =fopen("Prime.txt","w+");
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int b;
        scanf("%d",&b);
        putw(b,ptr);
        if (is_prime(b))
        {
            putw(b,ptr1);
        }
    }
    rewind(ptr1);
    int j;
    while((j=getw(ptr1))!=-1)
    {
        printf("%d\n",j);
    }
}
int is_prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;

}