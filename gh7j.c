#include<stdio.h>
int main()
{
    int c,x,n,v;
    scanf("%d", &n);
    x=1;
    while(x!=(n+1))
    {   
        c=1;
        v=0;
        while(c!=x)
        {
            if(x%c==0)
            {
                v=v + c;
                if (v==x)
                {
                    printf("%d ", v);
                }
            }
            ++c;
        }
        ++x;
    }
}