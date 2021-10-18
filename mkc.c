#include<stdio.h>
int main()
{
    int a,x=0,y=0,z,f=1;
    scanf("%d", &a);
    z=a*2-1;
    while(x<a)
    {
        while (y<=x)
        {
            printf(" ");
            ++y;
        }
        while (f<=z)
        {
            printf("*");
            ++f;
        }
        printf("\n");
        z=z-2;
        y=0;   
        ++x;
        f=1;        
    }
}
