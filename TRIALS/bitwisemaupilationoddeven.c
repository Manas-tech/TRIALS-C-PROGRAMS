#include<stdio.h>
int main(){
    int n;
    printf("enter the number to check even or odd in bits\n");
    scanf("%d",&n);
    if (n&1){
        printf("odd");
    }
    else {
        printf("even");
    }
}