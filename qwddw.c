#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    int y = x ;

    if (65<=y && y<=90)
        printf("uppercase");
    else
        printf("lowercase");
}