#include<stdio.h>
int main()
{
    int arr[13]={1,1,3,3,4,2,11,1,3,7,2,4},i,j,k,p;
    for ( i = 0 ; i < 12 ; i++)
    {
        for ( j = i+1 ; j < 12 ; j++)
        {
            if (arr[i] == arr[j] )
            {
                arr[j]=arr[j+1] ;
            }    
        }
    }
    for ( p = 0; p < 7; p++)
    {
        printf("%d", arr[p]);
    }
}