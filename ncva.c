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
    if (x==1)
    {
        printf("1 \t");
    }
    else
    {
        number(x-1);
        printf("%d \t", x);
    }
    
}