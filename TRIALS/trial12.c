#include<stdio.h>
int main()
{
    int a,i,x;
    x=2;
    printf("how many prime numbers you want\n");
    scanf("%d",&a);
    printf("the prime numbers are\n");
    
        for(i=2;i<x+a;i++)
        {
            if(x%i==0)
                if(i==x)
                {
                    printf("%d\n",x);
                    //break;
                    a--;  
                }                   
            x++;
            
    }

}