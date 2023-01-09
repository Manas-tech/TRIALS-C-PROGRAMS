#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main(){
    char inputString[100], outputArray[100];
    int readIndex = 0, writeIndex;
    printf("Enter a String \n");
    gets(inputString);
    /* Skips all spaces before first characters */
    while(inputString[readIndex] == ' '){
        readIndex++;
    }
 
    for(writeIndex = 0;inputString[readIndex] != '\0'; readIndex++){
      if(inputString[readIndex]==' ' && inputString[readIndex-1]==' '){
          continue;
      }
      outputArray[writeIndex] = inputString[readIndex];
      writeIndex++;
    }
    outputArray[writeIndex] = '\0';
    printf("String without extra spaces\n%s", outputArray);
 
    getch();
    return 0;
}