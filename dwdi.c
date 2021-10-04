#include<stdio.h>
int main(void)
{
    int x,i,z;
    scanf("%d",&x);
    i=0;
    z=x;
    x=0;
    while(i<z)
    {
        if(i%2==0)
            x=x+i;
        ++i;
    }
    printf("%d", x);
}