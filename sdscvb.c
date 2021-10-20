#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,3,1,4,1,2},i,j=0,p;
    for ( i = 0 ; i < 8 ; i++)
    {
        for ( j = i+1 ; j < 8 ; j++)
        {
            if (arr[i] == arr[j] )
            {
                arr[j]=arr[j+1] ;
            }    
        }
    }
    for ( p = 0; p < 4; p++)
    {
        printf("%d", arr[p]);
    }
}