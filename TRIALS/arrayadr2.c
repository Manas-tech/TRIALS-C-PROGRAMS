#include <stdio.h>
int main (){
int a[5],i;
for (i=0;i<5;i++)
{
    printf("ENTER THE ELEMET [%d]\n",i);
    scanf("%d", (a+i));
}
for(i=0;i<5;i++)
{
    printf("\n%d ", *(a+i));
}

}