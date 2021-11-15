#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],m[40];
    int j=0,k,i=0;

    gets(str);
    gets(m);

    while (str[i]!='\0' ||  m[i]!='\0' )
    {
        if (str[i]!= m[i])
        {
            printf("the two strings are not equal ");
            break;
        }
        else
        {
            printf("the two strings are equal ");

        }
        ++i;
    }
}