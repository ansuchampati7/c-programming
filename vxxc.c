#include<stdio.h>
int main()
{
    int x,n,y=1,z=1;
    scanf("%d", &n);
    while(x<=n)
    {
        while(y<=x)
        {   
            printf("%d", z);   
            ++y;
            ++z;
        }
        ++x;
        y=1;
        z=1;
        printf("\n");
    }
}
