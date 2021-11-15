#include<stdio.h>
int x,y,z;

void swap(int *,int *);

int main()
{
    x=10,y=20,z=0;

    swap(&x,&y);
    printf("%d %d", x, y);
}

void swap(int *x, int *y)
{
    
    z=*x;
    *x=*y;
    *y=z;
}

