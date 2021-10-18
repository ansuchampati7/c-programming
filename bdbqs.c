#include<stdio.h>
int main()
{
    int a,x=1,y,z=1,f=1,g=1;
    scanf("%d", &a);
    y=a-1;
    while (x<=a)
    {
        while (z<=y)
        {
            printf(" ");
            ++z;
        }
        while (f<=(x*2-1))
        {
            printf("%d", f);
            ++f;
        }
        --f;
        while (g<x)
        {
            --f;
            printf("%d", f);
            ++g;
        }
        printf("\n");
        ++x;
        f=x;
        --y;
        g=1;
        z=1;
    }
}