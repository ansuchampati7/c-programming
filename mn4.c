#include<stdio.h>

int main() {
   int a, b, i, lcf;

   scanf("%d", &a);
   scanf("%d", &b);
   
   for(i = 2; i <= a || i <= b; i++) 
   {
   if( a%i == 0 && b%i == 0 )
        lcf = i;
        break;
   }

   printf("HCF = %d", lcf);
   
   return 0;
}