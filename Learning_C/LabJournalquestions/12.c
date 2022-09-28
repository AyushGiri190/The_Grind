#include<stdio.h>
typedef struct dates
{
    int date;
    int month ;
    int year ;
} date;
typedef struct student 
{
    char name[100];
    int roll_no;
    date dob;
    date date_of_admission;
} stu;

void main()
{
    int n;
    scanf("%d",&n);
    stu arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%s %d %d-%d-%d %d-%d-%d",&arr[i].name,&arr[i].roll_no,&arr[i].dob.date,&arr[i].dob.month,&arr[i].dob.year,&arr[i].date_of_admission.date,&arr[i].date_of_admission.month,&arr[i].date_of_admission.year);
    }
    for (int i=0;i<n;i++)
    {
        printf("Name -:%s \nRoll N0 -:%d \nDate of birth -:%d-%d-%d\nDate of admission -:%d-%d-%d\n",arr[i].name,arr[i].roll_no,arr[i].dob.date,arr[i].dob.month,arr[i].dob.year,arr[i].date_of_admission.date,arr[i].date_of_admission.month,arr[i].date_of_admission.year);
    }
}
