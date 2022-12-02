#include <stdio.h>  
int main()  
{  
    int ct=0,n,i=1,j=1; 
    printf("Enter the number: ");
    scanf("%d", &n
    ); 
    while(n<10)  
    {  
        j=1;  
        while(j<=i)  
        {  
            if(i%j==0)
            ct++;  
            j++;   
        }  
        if(ct==2)  
        {  
            printf("%d ",i);  
            n++;  
        }  
        i++;  
}  
}  