#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],k;
    int j=0,s=0,i=0;
    k='l';
    gets(str);

    while (str[i]!='\0')
    {
        if (str[i]== k)
        {
            ++s;
        }
        ++i;
    }
    printf(" number of a in the str %d \n ", s);
    
}