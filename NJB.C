#include<stdio.h>

int main()
{
    int  x[2][2]={{10,20},{30,40}},i,j;
    int (*ptr)[2];
    ptr = x;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d \t", *(*(ptr+ i)+j));
        }
    }
}