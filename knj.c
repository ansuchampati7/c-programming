#include<stdio.h>
int main()
{
    int c=1,x,y=0,z=1,p;
    scanf("%d", &x);
    p=x;
    while(c<=x)
    {
        while(x-y>0)
        {
            printf(" ");
            ++y;
        }
        while(z<=c )
        {
            printf("%d", p);
            ++z;
            --p;
        }
        p=x;
        printf("\n");
        y=c;
        z=1;
        ++c;
    }
}