#include<stdio.h>
int main()
{
    int n,x,y,z,q;
    scanf("%d", &n);
    x=1;
    while(x!=n)
    {
        y=x;
        q=0;
        while (y!=0)
        {
            q=(q * 10) + (y%10) ;
            y=y/10;
        }
        if (q==x)
        {
            printf("%d  ", x);
        }
        ++x;
    }
    
}