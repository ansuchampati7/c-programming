#include<stdio.h>
int main()
{
    int arr[5]={1,1,3,2,4},i=0,l=4,q;
    for (  ; i < l ; )
    {
        q=arr[i];
        arr[i]= arr[l];
        arr[l] = q;
        ++i;
        --l;
    }
    for ( i = 0; i < 5; i++)
    { 
        printf("%d", arr[i]);
    }
}