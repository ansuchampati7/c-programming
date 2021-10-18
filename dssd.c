#include<stdio.h>
int main()
{
    int x,n,y=1;
    scanf("%d", &n);
    while(x<=n)
    {
        while(y<=x)
        {
            printf("*");   
            ++y;
        }
        ++x;
        y=1;
        printf("\n");
    }
}