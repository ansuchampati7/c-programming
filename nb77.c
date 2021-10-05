#include<stdio.h>
int main()
{
    int i,x,z,y,p,e;
    printf("how many numbers u want to check?");
    scanf("%d",&e);
    
    
    while (e>0)
    {
        scanf("%d",&x);
        p=x;
        i=0;
        y=0;
        while(x>0)
        {
            z=x%10;
            y = y + z*z*z;
            ++i;
            x=x/10;
        }
        if (p==y)
        {
            printf("armstrong number \n");
        }
        else
        {
            printf("not armstrong number \n");
        }
    --e;
    }
    return 0 ;
    
}