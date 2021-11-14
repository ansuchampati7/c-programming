#include<stdio.h>

int main()
{
    int x[]={1,2,3,4,5};
    int *y,i,sum=0;
    y=&x[4];
    for (i = 4 ; i > -1 ; --i)
    {
        printf("%d \t", *(y-i) );
    }
}