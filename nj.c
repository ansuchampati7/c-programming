#include<stdio.h>
int main()
{
    int x,n,y=1;
    scanf("%d", &n);
    x=n;
    while(x>0)
    {
        while(y<=x)
        {
            printf("%d", x);   
            ++y;
        }
        --x;
        y=1;
        printf("\n");
    }
}