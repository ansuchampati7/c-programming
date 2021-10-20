#include<stdio.h>
int main()
{
    int arr[2][2], r,c, brr[2][2] ;
    for (r = 0; r < 2 ; ++r)
    {
        for ( c = 0; c < 2 ; ++c)
        {
            printf("Enter value for disp[%d][%d]:", r, c);
            scanf("%d", &arr[r][c]);
        }
    }
    printf("THE FIRST MATRIX IS :--> \n");
    for (r = 0; r < 2 ; ++r)
    {
        for ( c = 0; c < 2 ; ++c)
        {
            printf("%d", arr[r][c]);
        }
        printf("\n");
    }

    printf("FOR THE SECOND MATRIX\n");

    for (r = 0; r < 2 ; ++r)
    {
        for ( c = 0; c < 2 ; ++c)
        {
            printf("Enter value for disp[%d][%d]:", r, c);
            scanf("%d", &brr[r][c]);
        }
    }
    printf("THE second MATRIX IS :--> \n ");
    for (r = 0; r < 2 ; ++r)
    {
        for ( c = 0; c < 2 ; ++c)
        {
            printf("%d", brr[r][c]);
        }
        printf("\n");
    }

    

    for (r = 0; r < 2 ; ++r)
    {   
        for ( c = 0; c < 2 ; ++c)
        {
            if (arr[r][c] != brr[r][c])
            {
                printf("THESE TWO MATRIXS ARE NOT EQUAL");
                break;
            }
            else if (r==1 && c==1) 
            {
                printf("THESE TWO MATRIXS ARE EQUAL");
            }
        }
    }
    return 0;
}