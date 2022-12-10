#include <stdio.h>
int main(){
int i,j,swap;
printf("enter the value of a \n ");
scanf("%d",&i);
printf("enter the value of  b\n ");
scanf("%d",&j);
   swap=i;
   i=j;
   j=swap;
printf("value of a is %d\n ",i);
printf("value of b is %d ",j);

}