#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    while ((x-1)>0)
    {
        scanf("%d", &z);
        y = y + z;
        --x;
    }
    printf("%d", y);
}