#include<stdio.h>
int main()
{
    int ar[3][3];
    int i,j;
    for ( i = 0; i < 3; i++)
    {   
        for ( j = 0; j < 3; j++)
        {
            printf("Enter value for ar[%d][%d]:", i, j);
            scanf("%d", &ar[i][j]);
        }
        
    }

    for ( i = 0; i < 3; i++)
    {   
        for ( j = 0; j < 3; j++)
        {
            printf("Enter value for ar[%d][%d]:", i, j);
            printf("%d \t", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}