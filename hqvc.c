#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],k[40],t;
    int j=0,s=0,i=0;
    gets(str);

    while (str[i]!='\0')
    {
        k[i]=str[i];
        ++i;
    }

    strrev(str);

    while (str[j]!='\0')
    {
        if (str[j]!=k[j])
        {
            s=1;
            break;
        }
        ++j;
    }
    if (s==1)
    {
        printf("not palindrome");
    }
    else
    {
        printf(" palindrome");
    }
}