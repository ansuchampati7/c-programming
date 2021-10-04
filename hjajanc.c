#include<stdio.h>
int main()
{
    int x,i,z;
    scanf("%d", &x);
    z=0;
    for ( i = 2; i < x ; ++i)
    {   
        
        if(x%i==0)
        {
            printf("%d",i);
            z+=1;
        }
    }
    printf("the factor count is %d", z);
}