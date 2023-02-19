/* C program to find HCF of two number using iterative approach */

#include <stdio.h>
int hcf(int n1, int n2)
{
   
    int hcf;
    for(int i=1; i<=n1 || i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
	int n1,n2;
	
	n1 = 40, n2 = 10;
	printf(" Using iterative Approach : \n");
	printf(" HCF of %d and %d = %d\n", n1, n2, hcf(n1, n2));

	n1 = 36, n2 = 60;
	printf(" HCF of %d and %d = %d\n", n1, n2, hcf(n1, n2));

	n1 = 24, n2 = 12;
	printf(" HCF of %d and %d = %d\n", n1, n2, hcf(n1, n2));
	return 0;
}