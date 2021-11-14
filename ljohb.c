#include<stdio.h>

int main()
{
    int x[]={1,2,3,4,5};
    int *y,i,sum=0;
    y=x;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *(y+i);
    }
    printf("%d", sum );
}