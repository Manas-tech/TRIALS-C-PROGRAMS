#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enetr two variables \n");
    scanf("%d %d",&a,&b);
    printf("Main-before swap: a=%d & b=%d",a,b);
    swap(&a,&b);
    printf("Main-after swap: a=%d & b=%d",a,b);
}

void swap(int *p,int *q)
{
    int temp;
    printf("Function-Before swap: p = %d & q = %d",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("Function-Before swap: p = %d & q = %d",*p,*q);
}