#include<stdio.h>
#include<string.h>

void main()
{
    char str[40];
    int j=0,s=0,i=0;

    gets(str);

    while (str[i]!='\0')
    {
        if (str[i]== ' ' )
        {
            ++s;
        }
        if (str[i]>=97 && str[i]<=122  ||  str[i]>=65 && str[i]<=90 )
        {
            ++j;
        }
        ++i;
    }
    printf(" number of spaces %d \n ", s);
    printf(" number of alphabets %d  \n", j);
    printf(" number of words %d  \n ",s+1);
}