#include<stdio.h>

int main()
{
    char str[100];
    int i=0;
    gets(str);
    while (str[i]!='\0')
    {
        ++i;
    }
    printf("%d", i);
}
