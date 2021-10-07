#include<stdio.h>
int main()
{
    int s,x,y,z;
    scanf("%d", &x);
    y= 2 ;
    s=0;
    while(y<x)
    {
        if ((x>2 && s<1) && x%2==0)
        {
            printf("2 ");
            ++s;
        }
        if(x%y==0)
        {
            z=2;
            while(z<y)
            {
                if(y%z==0)
                    break;
                else if((y%z!=0) && (z==y-1))
                    printf("%d ", y);
                ++z;
            }
        }    
        ++y;
    }

}