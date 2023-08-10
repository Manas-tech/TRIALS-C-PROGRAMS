#include<stdio.h>
int main(){
    /* int n ,x,bit;
     printf("Enter the number ");
     scanf("%d", &n);
     printf("Enter the position of bit to manipulate: ");
     scanf("%d", &bit);
     x=~(1<<(bit-1));
     printf("%d", n&x);
*/ 
//bitwise show
int a=128 ,n ,x ;
printf("enter the number");
scanf("%d",&n);
for ( int i = 0; i < 8; i++)
{
   x=n&a;
     if (x==0){
          printf("0");
     }
     else {
          printf("1");
     }
  a=a>>1;
}
 

}