/* Write a program in C to insert New value in the array (unsorted list ).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
*/
#include<stdio.h>
int main()
{
    int n,k,p;
    scanf("%d",&n);
    int input_arr[n],output_arr[n+1];
    scanf("%d",&p);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (i==p)
        {
            output_arr[i]=k;
            output_arr[i+1]=input_arr[i];
            p=-1;
        }
        else if (p<0)
            output_arr[i+1]=input_arr[i];
        else
            output_arr[i]=input_arr[i];
    }
      for(int i=0;i<=n;i++)
    {
        printf("%d ",output_arr[i]);
    }
}