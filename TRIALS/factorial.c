#include<stdio.h>  
int main()    
{    
 int i,a=1,n;    
 printf("Enter a number: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      a=a*i;    
  }    
  printf("Factorial of %d is: %d",n,a);    
return 0;  
}   