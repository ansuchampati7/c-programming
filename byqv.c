#include<stdio.h>
#include<string.h>

void main()
{
    char str[40];
    int j=0,s=0,i=0;

    gets(str);

    while (str[i]!='\0')
    {
        if (str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u' )
        {
            ++s;
        }
        if (str[i]>=97 && str[i]<=122  ||  str[i]>=65 && str[i]<=90 )
        {
            ++j;
        }
        ++i;
    }
    printf(" number of vowels %d \n ", s);
    printf(" number of consonants %d  \n", j-s);
    
}