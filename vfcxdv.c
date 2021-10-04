#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x, &y);
    printf("\n");
    char a;
    scanf("%c", &a);

    switch (a)
    {
    case '+' :
        printf("%d",x+y);
        break;
    case '-':
        printf("%d",x-y);
        break;
    case '*':
        printf("%d",x*y);
        break;
    case '/' :
        printf("%f",x/y);
        break;
    default :
        printf("fak u");
        break;
    }
}