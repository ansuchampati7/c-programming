#include<stdio.h>
int main(void)
{
    char x;
    scanf("%c", &x);
    
    x>=97 && x<=122 ? x = x - 32 : printf("allready uppercase ") ;
    printf("%c", x) ;
}