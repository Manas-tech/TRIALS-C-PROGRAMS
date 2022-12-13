#include <stdio.h>
int main(){
int i;

int a[]={1,2,3,4,5};
printf("adress in main %u \n",a);
printarray(a);
for (i=0;i<5;i++)
{
    printf("%d\n",a[i]); 
}
}
void printarray(int a[]){
    
printf("adress in print %u \n",a);
    for( int i=0; i<5; i++){
        a[i]=0;
    }
}