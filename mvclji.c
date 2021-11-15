#include<stdio.h>

int main()
{
    char str[]="proud to be a kiitian";
    int i=0;
    while (str[i]!='\0')
    {
        ++i;
    }
    printf("%d", i);
}
