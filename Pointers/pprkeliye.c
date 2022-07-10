#include<stdio.h>
#include<stdlib.h>
void main()
{
    int c=0;
    int arr[6]={1,1,2,3,3,3};
    for (int i =0;i<6;i++)
    {
        int key =arr[i];
        for(int j=i+1;j<6;j++)
        {
            if( arr[j]==key)
            {
                c++;
                i++;
                while (arr[i]==key)
                {
                    i++;
                }
            }

        }
        i--;
    }
    printf("%d",c);
}
