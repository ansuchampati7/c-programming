#include<stdio.h>
int main()
{
    int x,i,z;
    scanf("%d", &x);
    z=x;
    for ( i = 1;  i< z ; ++i)
    {
        x=x*i;
        if (i==(z-1))
            printf(" %d \n ",x);   
    }
}