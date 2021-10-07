#include<stdio.h>
int main()
{
    int ff,c,h,n,x,y,z,q;
    scanf("%d", &n);
    x=1;
    
    while(x!=(n+1))
    {
        y=x;
        q=0;
        ff=0;
        while (y!=0)
        {
            q= y%10 ;
            c=q;
            h=1;
            while (c!=0)
                {
                    h = h*c ;
                    --c;
                }
            ff = ff + h;
            y= y/10;
        }
        if (ff==x)
        {
            printf("%d  ", ff);
        }   
        ++x;
    }
    
}