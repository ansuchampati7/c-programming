#include<stdio.h>
int main()
{
    int x,z;
    printf("Enter the number==>");
    scanf("%d", &x );
    printf("Enter the number==>");
    scanf("%d", &z );
    number(x,z);
}

void number(int x, int z)
{
    static i;
    if (x>z)
    {
        i=z;
            if (x%i==0 && z%i==0)
            {
                printf("%d", i);  
            }
            else
            {
                i=i-1;
                printf("%d",i);
                number(x,z);
            }
    }
    else
    {
        i=x;
            if (x%i==0 && z%i==0)
            {
                printf("%d", i);
                
            }
            else
            {
                i=i-1;
                printf("%d",i);
                number(x,z);
                
            }
    }
}