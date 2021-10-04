#include<stdio.h>
int main()
{
    int x,i,z;
    scanf("%d", &x);
    z=1;
    for ( i = 2; i < x ; ++i)
    {   
        
        if(x%i==0)
        {
            z=z + i;
            if(z==x)
            {
                printf("perfect number");
                break;
            }
        }
    }
    
    
}