#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "C programming";
  char str2[20];

 printf("BEFORE COPYING %s\n ",str1);
 strcpy(str2, str1);

   // C programming
  printf("AFTER COPYING %s USING STRCPY ",str1);

  return 0;
}