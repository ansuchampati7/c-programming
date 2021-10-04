#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the numbers are a: %d and b: %d", a, b);


}