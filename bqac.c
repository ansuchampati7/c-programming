#include<stdio.h>
void main()
{
    char str[4],t;
    int i=3 , j=0;
    gets(str);
    while (j!=i)
    {
        t=str[i];
        str[i]=str[j];  
        str[j]=t;
        --i;
        ++j;
    }
    puts(str);
}