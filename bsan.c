#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],m[40];
    int j=0,k,i=0;
    gets(str);
    gets(m);
    j = strlen(str);
    k = j + strlen(m);
    while (j<=k)
    {
        str[j]= m[i];
        ++j;
        ++i;
    }
    puts(str);
}