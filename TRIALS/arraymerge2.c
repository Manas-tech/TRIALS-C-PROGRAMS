#include <Stdio.h> 
int main()
{ 
int arr1 [100],a1,arr2 [100],a2,arr3[100]; 
int i,index=0;
//ARRAY 1------------------------------------------------------------
 printf("ENTER THE SIZE OF ARRAY 1\n");
 scanf("%d",&a1);
 printf("Enter the Elements of the first array\n");  
 for(i=0;i<a1;i++)
 { 
 scanf ("%d",&arr1[i]); 
 } 
//ARRAY 2------------------------------------------------------------------
   printf("ENTER THE SIZE OF ARRAY 2\n");
   scanf("%d",&a2);
   printf("Enter the Elements of the second array\n"); 
   for(i=0;i<a2;i++) 
   { 
   scanf ("%d", &arr2[i]);  
   } 
//MERGING ARRAY 1 WITH 3---------------------------------------------------------
      for(i=0;i<a1;i++)
      { 
      arr3[index]=arr1[i]; 
      index++; 
      } 
//MERGING ARRAY 2 WITH 3------------------------------------------------------------
      for(i=0;i<a2;i++)
      { 
      arr3[index]=arr2[i]; 
      index++; 
      } 
//FINAL ARRAY-------------------------------------------------------------------------      
          printf ("The merged array is"); 
          for(i=0;i<a1+a2;i++) 
          { 
          printf("\n%d",arr3[i]); 
          } 
return 0; 
}