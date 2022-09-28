#include<stdio.h>
typedef struct salary
{
   float BASIC;
   float DA;
   int PF;
   float Income;
   float net;
} salary;

typedef struct employee
{
    char name[100];
    int Empcode;
    char Designation[100];
    char Department[100];
    salary nettsalary;
}emp;
void main()
{
    int n;
    scanf("%d",&n);
    emp arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%s %d %s %s %f",&arr[i].name,&arr[i].Empcode,&arr[i].Designation,&arr[i].Department,&arr[i].nettsalary.BASIC);
        arr[i].nettsalary.DA=0.5*arr[i].nettsalary.BASIC;
        arr[i].nettsalary.PF=1800;
        float gross=arr[i].nettsalary.DA+arr[i].nettsalary.BASIC;
        if (gross>500000)
            arr[i].nettsalary.Income=0.03*gross;
        else
            arr[i].nettsalary.Income=0;
        arr[i].nettsalary.net=gross-1800-arr[i].nettsalary.Income;
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if (arr[i].Empcode==k)
        {
            printf("Name %s\n",arr[i].name);
            printf("EMPCODE %d\n",arr[i].Empcode);
            printf("Designation %s\n",arr[i].Designation);
            printf("Department %s\n",arr[i].Department);
            printf("Salary %f",arr[i].nettsalary.net);
        }
    }
}
