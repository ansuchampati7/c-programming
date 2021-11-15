#include<stdio.h>
void main()
{
    char str[40],m[40];
    int j=0;
    gets(str);
    while (str[j] != '\0')
    {
        m[j]=str[j];
        ++j;
    }
    puts(m);
}