#include<stdio.h>
int main()
{
    int i,x,z,y,p;
    scanf("%d",&x);
    i=0;
    y=0;
    p=x;
    while(x>0)
    {
        z=x%10;
        y = y + z*z*z;
        ++i;
        x=x/10;
    }
    if (p==y)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong");
    }
    return 0 ;
    
}