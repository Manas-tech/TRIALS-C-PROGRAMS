#include <stdio.h>
int main(){
int d;
printf("ENTER THE DAY NUMBER\n");
scanf("%d",&d);
switch(d)
{
case 1:{
    printf("THE DAY IS MONDAY \n'EVERY DAY HAS SOME SPECIAL IN IT'\n");
    break;
}
case 2:{
    printf("THE DAY IS TUESDAY\n'IF YOU DONT FIGHT FOR IT YOU WONT GET IT'\n");
    break;
}
case 3:{
    printf("THE DAY IS WEDNESDAY\n'BE NICE TO EVERYONE AND WATCH YOUR SELF GROW'\n");
    break;
}
case 4:{
    printf("THE DAY IS THURSDAY\n'EVEN THE HARDEST OF THE DAY HAS A END'\n");
    break;
}
case 5:{
    printf("THE DAY IS FRIDAY\n'YOU DESERVE KINDNESS AND HAPPINESS'\n");
    break;
}
case 6:{
    printf("THE DAY IS SATURDAY\n'YOU SHOULD BE PROUD OF YOURSELF EVEN WITH SMALL ACHIVEMENTS'\n");
    break;
}
case 7:{
    printf("THE DAY IS SUNDAY\n'STAY WITH THE PEOPLE WHO GIVES YOU HAPPINESS'\n");
    break;
}



default:{printf("ENTER NUMBER BETWEEN 1-7 ONLY\n");}
}

printf("HAVE A NICE DAY :)");

    return 0;
}