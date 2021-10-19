#include<stdio.h>
int main()
{
    int arr[5]={1,1,3,2,4},i,l=0;
    for ( i = 0 ; i < 5 ; i++)
    {
        l = l + arr[i];
    }
    printf("%d", l);
}