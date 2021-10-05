#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    i=0;
    while(x>0)
    {
        ++i;
        x=x/10;
    }
    printf("%d", i);
    return 0 ;
    
}