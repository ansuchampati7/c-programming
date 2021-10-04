#include<stdio.h>
#include<math.h>
float main()
{
    float x,y=2 ;
    scanf("%f", &x);
    x = fmod(x,y);
    printf("%f", x);
   
}