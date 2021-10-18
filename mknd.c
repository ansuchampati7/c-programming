#include<stdio.h>
int main()
{
    int c=1,x,y=0,z=1;
    scanf("%d", &x);
    
    while(c<=x)
    {
        while(x-y>0)
        {
            printf(" ");
            ++y;
        }
        while(z<=c)
        {
            printf("%d", c);
            ++z;
        }
        printf("\n");
        y=c;
        z=1;
        ++c;
    }
    
}