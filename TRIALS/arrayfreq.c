#include <stdio.h>
int main(){
    int a[10],i,count,freq=1;
    printf("ENTER THE NUMBERS\n");
    for (i=0; i<10;i++)
{scanf("%d\n",&a[i]);}
printf("ENTER THE NUMBER TO FIND THE FREQUENCY\n");
scanf("%d",&count);
for(i=0;i<10;i++)
{
if (a[i]==count)
freq++;
}
printf("FREQUENCY OF %d is %d",count,freq);
   return 0;
}
