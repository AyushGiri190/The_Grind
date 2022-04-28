/*Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/
#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int input_arr[n],output_arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
        output_arr[i]=-1;//Here we will make every elemnt of output array to -1:
    }
    for (int  i = 0; i < n; i++)
    {
        count=1;//every time count will be set to 1:
        for(int j=i+1;j<n;j++)
        {
            if (input_arr[i]==input_arr[j])//will check every element after i th element
            {
                count++;
                output_arr[j]=0;//will make the j th index element of output array to 0:
            }
        }
        if (output_arr[i]!=0)
        {
            output_arr[i]=count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (output_arr[i]!=0)
        {
           printf("%d %d \n",input_arr[i],output_arr[i]);
        }              
    }
    return 0;
}