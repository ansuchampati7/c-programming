#include<stdio.h>
int main()
{
    int x,c,z,h;
    scanf("%d", &x);
    c=0;
    z=1;
    h=1;
    while((x+1)!=h)
    {   
        if (h%2!=0)
        {
            printf("%d  ", c );
            c=c+z;
        }
        else
        {
            printf("%d  ", z);
            z=c+z;
        }
        ++h;
    }
    
}