#include<stdio.h>
int main()
{
    int y,z;
    scanf("%d", &y);
    while (y!=0 && z!=0)
    {
        scanf("%d", &z);
        y = y + z;
        
    }
    printf("%d", y);
}