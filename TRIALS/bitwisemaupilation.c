#include<stdio.h>
int main(){
    int i =32 ,j=32,k,l,m;
    k=i|j;
    l=i&j;
    m=k^l;
    printf("%o %x %d %d %d \n",i,j,k,l,m);

}