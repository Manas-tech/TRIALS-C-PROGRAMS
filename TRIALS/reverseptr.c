#include<stdio.h>
#define MAX 30
 
void main()
{
	int size, i, arr[MAX];
	int *ptr;
 
	ptr = arr;
 
	printf("Enter the size of array:\t");
	scanf("%d", &size);
 
	printf("Enter %d integers into array:\n", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
 
	ptr = &arr[size - 1];
 
	printf("Elements of array in reverse order are:\n");
 
	for (i = size - 1; i >= 0; i--)
	{
		printf("%d\n", *ptr);
		ptr--;
	}
}