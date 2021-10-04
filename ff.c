#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter x \n");
    scanf("%d",&x);
    printf("enter y \n");
    scanf("%d",&y);
    z=y;
    y=x;
    x=z;
    printf("the numbers are x = %d and y= %d",x,y);



}