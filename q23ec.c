#include<stdio.h>
int main()
{
    int s,c,x,n;
    scanf("%d", &n);
    x=2;
    s=0;
    while(x!=(n+1))
    {   
        c=2;
        if(n>2 && s<1)
        {
            printf("2 ");
            ++s;
        }
        while(c<x)
        {
            if (x%c==0)
            {
                break;
            }
            else if((x%c!=0) && ((x-1)==c))
            {
                printf("%d ", x);
            }
            ++c;
        }
        ++x;
    }
    return 0;
}