#include<stdio.h>
int main()
{
    int arr[3][3], r,c ;

    for (r = 0; r < 3 ; ++r)
    {
        for ( c = 0; c < 3 ; ++c)
        {
            printf("Enter value for disp[%d][%d]:", r, c);
            scanf("%d", &arr[r][c]);
        }
    }
    printf("THE upper row MATRIX IS :--> \n");
    for (r = 0; r < 3 ; ++r)
    {
        for ( c = 0; c < 3 ; ++c)
        {
            if (r<c)
                printf("%d \t", arr[r][c]);
        }
        
    }
}