#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int input_arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input_arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for (int j=i+1;j<n;j++)
        {
            if (input_arr[j]!=0)
            {
                if(input_arr[i]==input_arr[j])
                {
                    count++;
                    input_arr[j]=0;
                }
            }
        }
        if (count==0 && input_arr[i]!=0)
        {
            printf("%d ",input_arr[i]);
        }
        
    }
}