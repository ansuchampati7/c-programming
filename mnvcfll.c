#include<stdio.h>
int main()
{
    int x=1,y=1,z=1,a,k;
    scanf("%d", &a);
    while (x<=a)
    {
        while (y<=x)
        {
            
            printf("%d ", z);
            ++z;
            ++y;
        }
        printf("\n");
        y=1;
        ++x;
    }
    x=x-2;
    k=z-a;
    while (x>=0)
    {
        y=x;
        while (y>=0)
        {
            printf("%d ", k);
            ++k;
            --y;
        }
        printf("\n");
        k=k/2-1;
        --x;
        y=x;
    }

}