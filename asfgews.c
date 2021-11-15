#include<stdio.h>
#include<string.h>

void main()
{
    char str[40],k[40],t;
    int j=0,s=0,i=0;
    gets(str);
    gets(k);

    while (str[i]!='\0')
    {
        t=str[i];
        str[i]=k[i];
        k[i]=t;
        ++i;
    }

    while (str[j]!='\0')
    {
        printf("%c", str[j]);
        
        ++j;
    }
    j=0;
    while (str[j]!='\0')
    {
        printf("%c", k[j]);
        
        ++j;
    }
    
    
}