#include<stdio.h>

int main()
{
    int x[]={1,2,3,4,5};
    int *y,i;
    y=x;
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", *(y+i) );
        
    }
    

}