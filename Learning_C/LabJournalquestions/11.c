#include<stdio.h>
typedef struct employee
{
    int empcode;
    char empname[100];
    int empsales;
}emp;

int main()
{
    int n ;
    float sum=0;
    scanf("%d",&n);
    emp arr[n];
    printf("Enter the details of the employe in the format code,name,sales\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d %s %d",&arr[i].empcode,&arr[i].empname,&arr[i].empsales);
        sum+=arr[i].empsales;
    }
    printf("Total sales are  %0.0f\n",sum);
    printf("Average Sales are  %0.2f",sum/n);
    return 0;
}