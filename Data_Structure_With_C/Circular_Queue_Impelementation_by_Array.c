#include<stdio.h>
#include<stdlib.h>
# define max 10
int enqueue(int *arr,int front , int rear);
int dequeue(int *arr,int front ,int rear);
void display (int *arr,int front,int rear );
int main()
{
    int rear=-1,front=-1;
    int arr[max];
    int choice=0;
    do
    {
        printf("1.For enqueue\n2.For dequeue\n3.For Display\n4.For Exit");
        printf("Enter thr choice here-:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(arr,front,rear);
            break;
        case 2:
            dequeue(arr,front,rear);
            break;
        case 3:
            display(arr,front,arr);
            break;
        case 4:
            exit(0);
        
        default:
           printf("Entert the valid Choice");
        }
    } while (1);
    
}
int enqueue(int *arr,int front , int rear)
{
    if ((front==0 && rear==max-1) || (rear+=front))
        printf("Queue overflow\n");
   
    else
    {
        int val;
        printf("Enter the value to be inserted -: ");
        scanf("%d",&val);
        if (rear==-1)
            front =0,rear=0;
        else if (rear = max-1)
            rear=0;
        else
            rear++;
        arr[rear] = val;
    }
    return rear;
}
int dequeue(int *arr,int front ,int rear)
{
    int a;
    if ( front == - 1 )
        printf ( " Queue is underflow \n " ) ;
    else
    {
        a=arr[ front ] ;
        if ( front == rear )
            front = -1 , rear = -1 ;
        else if ( front == max - 1 )
            front = 0 ;
        else
            front ++ ;
        printf ( " Deleted element is % d \n " , a ) ;
    }
}
void display (int *arr,int front,int rear )
{
    int i , j;
    if ( front == - 1 && rear == - 1 )
    {
        printf ( " Queue is underflow \n " );
    }
    if( front > rear )
    {
        for ( i = front ; i < max ; i ++ )
            printf ( "%d " , arr [ i ] ) ;
        for ( j = 0 ; j <= rear ; j ++ )
            printf ( "%d " , arr [ j ] ) ;
    }
    else
    {
        for ( i = front ; i <= rear ; i ++ )
            printf ( "%d " , arr [ i ] ) ;
    }
    printf ( " \n " ) ;
    
}
