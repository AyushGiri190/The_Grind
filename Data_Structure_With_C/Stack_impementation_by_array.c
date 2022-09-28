#include<stdio.h>
#include<stdlib.h>
#define max 50
int push(int arr[],int top);
int pop(int arr[],int top);
void display(int arr[],int top);
int main()
{
    int arr[max],choice,top=-1;
    do
    {
        printf(" 1. For Push operation\n 2. For Pop operation \n 3. For Display opertion\n 4.For exit\n");
        printf("Enter your choice here-:");
        scanf("%d",&choice);
        switch(choice)
        {
            case(1):
            {
                top=push(arr,top);
                break;
            }
            case(2):
            {
                top=pop(arr,top);
                break;
            }
            case(3):
            {
                display(arr,top);
                break;
            }
            case(4):
            {
                exit(0);
            }
            
        }
    }while(1);
}
int push(int *arr,int top)
{
    int val;
    if (top==max-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter the value to be entered -:");
        scanf("%d",&val);
        top++;
        arr[top]=val;
    }
    return top;
}
int pop(int *arr,int top)
{
    if (top==-1)
    {
      printf("Stack Underflow");  
    }
    else
    {
        printf("The deleted element is %d\n",arr[top]);
        top--;
    }
    return top;
}
void display (int *arr,int top)
{
    for(top;top>=0;top--)
    {
        printf("%d ",arr[top]);
    }
    printf("\n");
}