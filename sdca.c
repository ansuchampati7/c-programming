#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number==>");
    scanf("%d", &x );
    y = number(x);
    printf("%d", y);
}

int number(int x)
{
    static int z=0;
    if (x==1)
    {
        return z+1;
    }
    else
    {
        z = x+z; 
        number(x-1);
    }
}