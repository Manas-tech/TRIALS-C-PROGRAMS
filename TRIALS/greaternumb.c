#include <stdio.h>
int main(){
	int n;
	int m;
	printf("ENTER YOUR NUMBER\n");
	scanf("%d",&n);
	printf("ENTER YOUR SECOND NUMBER\n");
	scanf("%d",&m);
	if(n>>m){
		 printf ("YOUR 1 NUMBER IS GREATER");
	}
	else
	{
		printf("YOUR 2 NUMBER IS GREATER");
	}
	return 0;
}