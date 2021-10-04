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
            printf("%d is not a prime number",x);
            z+=1;
            break;
        }
    }
    if(z==0)
            printf("%d is a prime number",x);
    
}