#include <stdio.h>

int main ()
{
   int n1, n2, i, j, c,z=0,t=0;
   printf("Enter two numbers: ");
   scanf("%d %d", &n1, &n2);

   printf("Prime numbers between %d and %d are:\n", n1, n2);

   for (i = n1 + 1; i < n2; ++i)
   {
      c = 0; //flag is set to 0
      for (j = 2; j <= i/2; ++j)
      {
         if (i % j == 0)
         {
            c = 1;
            break;
         }
      }
      if (c == 0) {
          printf("%d\t", i);
          z=z+i;
           t++;}
         
   }
   printf(" \nsum %d",z);
     printf(" \ntotal prime no %d",t);

   return 0;
}