/*
Write a program in C to insert New value in the array (sorted list ).
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
*/
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int input_arr[n],output_arr[n+1];
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        int min_index=i;
        for (int j=i+1;j<n;j++)
        {
            if (input_arr[j]<input_arr[min_index])
                min_index=j;
        }
        int temp=input_arr[i];
        input_arr[i]=input_arr[min_index];
        input_arr[min_index]=temp;
    }
    for (int i=0;i<n;i++)
    {
        if (k>0 && k<input_arr[i])              //if k>0 hoga aur k<element ke hoga to hume k ko -1 krna hai  
        {                                       //aur array main daalna hai :)
            output_arr[i]=k;
            output_arr[i+1]=input_arr[i];
            k=-1;
        }
        else if(k<0)
        {
            output_arr[i+1]=input_arr[i];
        }
        else
            output_arr[i]=input_arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d ",output_arr[i]);
    }
}
