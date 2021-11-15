#include<stdio.h>

void larger(int,int);

int main()
{
    int x=3,y=4;
    larger(x,y);
}

void larger(int x, int y)
{
    int i,z[x][y],j,q[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf(" the numbers are z[%d][%d] \t ", i, j);
            scanf(" %d ", &z[i][j]) ;
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf(" the numbers are q[%d][%d] \t ", i, j);
            scanf(" %d ", &q[i][j]) ;
        }
    }


    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            z[i][j]= z[i][j]*q[i][j];
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf(" the numbers are z[%d][%d] \t %d ", i, j, z[i][j]);
        }
    }

}