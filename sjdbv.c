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
    int i;
    if (x>z)
    {
        for ( i = z; i > 0; --i)
        {
            if (x%i==0 && z%i==0)
            {
                printf("%d", i);
                break;
            }
        }
    }
    else
    {
       for (i = x; i > 0; --i)
        {
            if (x%i==0 && z%i==0)
            {
                printf("%d", i);
                break;
            }
        }
    }
}