#include <stdio.h>

int main() {
    int sum = 0, r ,temp ,n;
    //palindrome number
    printf("ask for the number ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum =(sum*10) +r;
        n =n/10;
        
    } if(temp == sum)
    {
         printf("is a palidrome number");
    }
    else{
        printf("not a palidrome number");
    }

 return 0;
}