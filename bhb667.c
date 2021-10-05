#include<stdio.h>
int main()
{
    int i,x,z,y;
    scanf("%d",&x);
    i=0;
    y=0;
    while(x>0)
    {
        z=x%10;
        y = y*10 + z;
        ++i;
        x=x/10;
    }
    printf("%d", y);
    return 0 ;
    
}