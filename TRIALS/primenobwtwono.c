#include <stdio.h>

int main ()
{
   int num1, num2, i, j, c;
   printf("Enter two numbers: ");
   scanf("%d %d", &num1, &num2);

   printf("Prime numbers between %d and %d are:\n", num1, num2);
   // Displaying prime number between num1 and num2
   for (i = num1 + 1; i < num2; ++i)
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
      if (c == 0) //if flag == 0, then display i
          printf("%d\t", i);
   }
   return 0;
}