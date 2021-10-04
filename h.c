#include<stdio.h>
int main(void)
{
    char ch;
    int x;
    ch = getchar();
    x = putchar(ch);     //putchar returns the assci value of a particular char
    printf("%d",x);
}