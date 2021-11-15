#include<stdio.h>

void larger(int x[],int);

int main()
{
    int y=7,h;
    int x[7] = {1,2,3,4,5,9,10};
    larger(x,y);

}

void larger(int x[], int y)
{
    int i,z;
    z = x[0];
    for (i = 0; i < y; i++)
    {
        if (x[i]>z) 
            z=x[i];
    }
    printf(" the largest number is %d \t ", z);
}