#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter side ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2==s3){
		printf("equilateral");
	}
	else if(s1==s2||s2==s3||s3==s1){
		printf("iso");
	}
	else{
		printf("sclaer");
	}
	return 0;
}