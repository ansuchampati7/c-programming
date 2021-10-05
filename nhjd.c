#include<stdio.h>
int main()
{
    int x,i,z;
    scanf("%d%d",&x,&i);
    z=x;
    while (i>1)
    {
        x=x*z;
        --i;
    }
    printf("%d \n", x);
}