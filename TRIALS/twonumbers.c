#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	printf("PLEASE ENTER TWO NUMBER\n");
	scanf("%d%d",&a,&b);
	printf("ENTER THE ONE KEY FOR THE MATH OPERATION\n 1.ADDITION \n 2.DIFFERENCe\n 3.PRODUCT\n 4.DIVISION \n 5.EXIT\n");
	scanf("%d",&c);
	if(c==1){
		d=a+b;
		printf("%d",d);
	}
	
	else if(c==3){
		d=a*b;
		printf("%d",d);
	}
	else if(c==4){
		d=a/b;
		printf("%d",d);
	}
	else if(c==5){
		printf("NO OPERATION");
	}
	return 0;
}
