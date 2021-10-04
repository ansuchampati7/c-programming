#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d", &x);
    for ( i = 0;  i <= 10 ; i++)
    {
        printf(" %d X %d = ",x,i);
        printf(" %d \n ",x*i);

    }
    
}