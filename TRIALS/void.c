#include <stdio.h>
int main() {
 Rectangle();
return 0;
  
}
void Rectangle(){
	int l,b,Rarea,Rperi;
	printf("enter values for rectangle");
	scanf("%d %d",&l,&b);
	Rarea= l*b;
	Rperi= 2*(l+b);
	printf("Raera =%d and Rperi = %d\n",Rarea,Rperi);
}
