#include<stdio.h>
int main()
{
    char y;
    y = getchar();
    int x = y;
    
    
    if (65 <= x  && x<= 90)
    {
        x = x + 32;
        printf("%d", x );
        putchar(x);
    }
    else 
    {
        x = x - 32;
        printf("%d", x );
        putchar(x);

    }
    return 0;
}
