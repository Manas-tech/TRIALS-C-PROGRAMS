#include <stdio.h>
int main(){
int i=0;
int count=0;
char name[21]="HELLO WORLD I'M MANAS";

while( name[i]!='\0')
{

    count++;
    i++;
}
printf("THE TOTAL  NUMBER OF CHARACTER'S ARE %d",count);



    return 0;
}