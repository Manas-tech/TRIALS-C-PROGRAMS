#include <stdio.h>
int main(){
	int p;
	printf("enter your percentage\n");
	scanf("%d",&p);
    printf("your percentage are %d \n",p);
    if(p>=75){
    	printf("1 DIVISION");
	}
	else if(p>=50 && p<75){
		printf("2 DIVISION");
	}
	else if(p>=30 && p<50){
		printf("3 DIVISION");
		}
	else{
		printf("fail");
	} 
    return 0;
    }