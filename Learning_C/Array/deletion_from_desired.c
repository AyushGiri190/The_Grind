/* Write a program in C to delete an element at desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/
#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    int input_arr[n],ouput_arr[n-1];
    scanf("%d",&p);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==p)
            p=-1;
        else if(p<0)
        {
            ouput_arr[i-1]=input_arr[i];
        }
        else
            ouput_arr[i]=input_arr[i];
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",ouput_arr[i]);
}