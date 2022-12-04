#include <stdio.h>
#include <string.h>

int main() {

  char string1[60] = "string 1";
  char string2[60] = "Only remaining characters will be copied.";
  strncpy(string1, string2, 18);
  printf("Final string is: %s", string1);
}