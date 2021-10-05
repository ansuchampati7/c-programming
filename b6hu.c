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
        y = y*10 + z;
        ++i;
        x=x/10;
    }
    if (p==y)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0 ;
    
}