#include<stdio.h>
int main()
{
    int a=5,b=-1,c;
    c=++b && a++;
    printf("%d%d%d",a,b,c);
}