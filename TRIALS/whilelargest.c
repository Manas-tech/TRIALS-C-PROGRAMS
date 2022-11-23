#include <stdio.h>  
int main()  
{  
  int i,big=0;  
  printf("ENTER THE NUMBERS;\n");
  while(1)  
  {   
      scanf("%d",&i);  
      if(i==-1)
      {
        printf("THE CODE ENDED!!\n");
        break;
      }
      if(i >big)  
        {  
              
             big=i;
        } 
  }  
  printf("THE LARGEST NUMBER IS %d",big);
   
 
return 0;  
}  