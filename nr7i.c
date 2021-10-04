#include<stdio.h>
int main(void)
{
    int x,i,z;
    scanf("%d",&x);
    i=0;
    z=x;
    while(i<z)
    {
        x=x+i;
        ++i;
    }
    printf("%d", x);
}