#include<stdio.h>
int main(){
     int a[10];
     int p,i,s=6;
     printf("ENTER THE VALUES \n");
     for(i=0 ; i<s; i++){
        scanf("%d",&a[i]);
        
     }
     printf("ENTER THE POSITION YOU WANT TO DELETE \n");
     scanf("%d",&p);
     for(i=p-1; i<s-1; i++)
        {
            a[i] = a[i + 1];
               s--;
        }
        printf("\nElements of array after delete are : ");
        for(i=0; i<s; i++)
        {
            printf("%d\t", a[i]);
        }

      
        

















 
return 0;

}