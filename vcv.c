#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x<10000) 
        x = x + (x*80)/100 + (x*20)/100 ;
    else 
        x = x + (x*90)/100 + (x*30)/100 ;
    printf("hence the gross salary is %d",x);
}