#include <stdio.h>
int main(){
    int h,w,t ,c=0;
    printf("ENTER THE NUMBER OF BOYS ");
    scanf("%d",&t);
    while (t--){
        printf("enter the height and weight of boy\n");
        scanf("%d %d",&h,&w );
        if (w<=50&&h>=170){
            c++;
        }
    }
printf("NUMBER OF BOYS =%d ",c);


}