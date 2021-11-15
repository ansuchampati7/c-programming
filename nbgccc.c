#include<stdio.h>
int x,y,z;

void swap(int,int);

int main()
{
    x=10,y=20,z=0;
    printf(" before swaping of two numbers in main function   %d %d  \n ", x, y);
    swap(x,y);
    printf("after swaping of two numbers in main function  %d %d  \n ", x, y);
}

void swap(int x, int y)
{
    
    z=x;
    x=y;
    y=z;
    printf(" after swaping of two numbers in swap function %d %d  \n ", x, y);
}