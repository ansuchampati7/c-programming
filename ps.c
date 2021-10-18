#include<stdio.h>
int main(void)
{
    int x=1, n , y=1,z=1;
    scanf("%d", &n);
    while(y<=n)
    {
        while(x<8)
        {   
            if (y%2!=0 && x==7)
            {
                printf("%d ", z + 1 );
            }
            else if (y%2==0 && x==1)
            {
                printf("%d ", z + 1 );
            }
            else
            {
                printf("%d ", z );
            }
            ++x;
        }
        ++y;
        x=1;
        ++z;
        printf("\n");
    }
}