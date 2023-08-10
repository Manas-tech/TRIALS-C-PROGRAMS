#include <stdio.h>
int main(){
int a[100],n,c1=0,c2=0,c3=0;
printf("enter the number of element\n");
scanf("%d",&n);
printf("enter the values in array\n");
for (int i = 0; i <n; i++)
{
    scanf("%d",&a[i]);
    if (a[i]%2==0 && a[i]!=8){
        c1++;
    }
    else if (a[i]%2==1 ) 
    {
        c2++;

    }
    else {
        c3++;
    }

}
c1=c1*1;
c2=c2*3;
c3=c3*5;
int x;
x=c1+c2+c3 ;

printf(" %d  ",x);



}