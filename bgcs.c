#include<stdio.h>
int main()
{
    int s,e,x,y,z;
    printf("the numbers u are willing to give");
    scanf("%d", &y);
    scanf("%d", &x);
    e=0;
    while ((y-1)>0)
    {
        scanf("%d", &z);
        if (z>x)
        {
            if (y==2)
            {
            s=x;
            break;
            }
            s=e;
            e=z;
            x=z; 
        }
        else
        {       
            if (y==2)
            {
            s=z;
            break;
            }
            if(e<s)
                s=e;        
            e=x;
        }
        
        
        --y;   
    }
    printf("%d", s);
    return 0;
}