#include<stdio.h>
int main()
{
    int arr[5]={1,1,3,2,4},i,l=0,q=0;
    for ( i = 0 ; i < 5 ; i++)
    {
        if (arr[i] %2==0)
        {
            l+=1;
        }
        else
        {
            q+=1;
        }
    }
    printf("%d are the no of odd numbers present \n", l);
    printf("%d are the no of odd numbers present", q);
}