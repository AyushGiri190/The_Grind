#include<stdio.h>
int main()
{
	int i = 3;
	int *j;
	int **k;
	j = &i;
	k = &j;
    printf("%u\n",j);
    printf("%u\n",k);
	k++;
	printf("%u ",k);
	return 0;
}