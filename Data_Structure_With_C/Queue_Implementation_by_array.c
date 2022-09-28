#include<stdio.h>
#include<stdlib.h>
#define max 50
int enqueue(int *arr,int rear);
int dequeue(int *arr,int front);
void display(int *arr,int front,int rear);
int main()
{
    int choice, front=-1,rear=-1,arr[max];
    do
    {
        printf(" 1. For Enqueue\n 2. For Dequeue \n 3. For Display operation\n 4.For exit\n");
        printf("Enter your Choice-:");
        scanf("%d",&choice);
        if (rear==0 && front==-1)
            front=0;
        switch (choice)
        {
            case 1:
            {
                rear = insert(arr,rear);
                break;
            }
            case 2:
            {
                front = delete(arr,front);
                break;
            }
            case 3:
            {
                display(arr,front,rear);
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    } while (1);
}
int enqueue(int *arr,int rear)
{
    int val;
    if (rear==max-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter the Value to be inserted ");
        scanf("%d",&val);
        rear++;
        arr[rear]=val;
    }
    return rear;
}
int dequeue(int *arr,int front)
{
    if (front==-1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("The deleted element is -: %d\n",arr[front]);
        front++;
    }
    return front;
}
void display(int *arr,int front,int rear)
{
    for (int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}