#include<stdio.h>
int main()
{
    int e,x,y,z;
    printf("the numbers u are willing to give");
    scanf("%d", &y);
    scanf("%d", &x);
    e=0;
    while ((y-1)>0)
    {
        scanf("%d", &z);
        if (z>x)
        {
            e=z;
            x=z;
        }
        else
        {
            e=x;
        }
        --y;   
    }
    printf("%d", e);
    return 0;
}