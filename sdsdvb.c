#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number==>");
    scanf("%d", &x );
    number(x);
}

void number(int x)
{
    static int y=0;
    if (x==0)
    {
        return;
    }
    else
    {
        y= (x%10) ; 
        printf("%d",y);
        x=x/10;
        number(x);
        
    }
}