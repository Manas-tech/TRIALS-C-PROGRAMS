#include <stdio.h>
#include <string.h>

int main() {

  char string1[70] = "You are reading string functions.";
  printf("Output string is: %s", strstr(string1, "reading"));
}