#include <stdio.h>
int main(){
    addition();
    diffrence();
    multiplication();

   

}
void addition ()
{
    int a,b,add;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("THE SUM OF THE TWO NUMBERS IS %d\n",add);
}
void diffrence ()
{
    int a,b,sub;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("THE DIFFRENCE OF THE TWO NUMBERS IS %d\n",sub);
}
void multiplication ()
{
    int a,b,mult;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d%d",&a,&b);
    mult=a*b;
    printf("THE MULTIPLICATION OF THE TWO NUMBERS IS %d\n",mult);
}