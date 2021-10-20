#include<stdio.h>
int main()
{
    int arr[2][2], r,c, brr[2] ,crr[2];

    for (r = 0; r < 2 ; ++r)
    {
        for ( c = 0; c < 2 ; ++c)
        {
            printf("Enter value for disp[%d][%d]:", r, c);
            scanf("%d", &arr[r][c]);
        }
    }
    for (r = 0; r < 2 ; ++r)
    {
        brr[r]=0;
        for ( c = 0; c < 2 ; ++c)
        {
            if (r==0)
            {
                brr[r]=brr[r] + arr[r][c];
            }
            else if (r==1)
            {
                brr[r]=brr[r] + arr[r][c];
            }
            else if (r==2)
            {
                brr[r]=brr[r] + arr[r][c];
            }
        }
        printf("\n");
    }
    for (r = 0; r < 2 ; ++r)
    {
        crr[r]=0;
        for ( c = 0; c < 2 ; ++c)
        {
            if (r==0)
            {
                crr[r]=crr[r] + arr[c][r];
            }
            else if (r==1)
            {
                crr[r]= crr[r] + arr[c][r];
            }
        }
        printf("\n");
        printf("THE SUM OF ROW OF THE MATRIX IS :--> \n");
        for ( r = 0; r < 2; r++)
        {
            printf("%d \t", brr[r] );
        }
        printf("\n");
        printf("THE SUM OF coloumn OF THE MATRIX IS :--> \n");

        for ( r = 0; r < 2; r++)
        {
            printf("%d \t", crr[r] );
        }
    }
    return 0;
}