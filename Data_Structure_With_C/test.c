#include<stdio.h>
int nn(int *front )
{
    *front += 1;
}
int main ()
{
    int i=5;
    nn(&i);
    printf("%d",i);

}