#include<stdio.h>
int main()
{
    int x,i,y,z;
    scanf("%d%d", &x , &y);
    i=0;
    z = x;
    while (i<(y-1))
    {
        x = x + z;
        ++i;
    }
    printf("%d",x);
}