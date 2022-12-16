#include<stdio.h>
int main(){
    int i;
    int arr[5]={1,2,3,4,5};
    int *aptr=arr;
 printf("arr[i]\n");   
 for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
}
printf("i[arr]\n");   
 for(i=0;i<5;i++){
        printf("%d\n",i[arr]);
}
printf("i+arr\n");
 for(i=0;i<5;i++){
        printf("%d\n",*(i+arr));
}printf("arr+i\n");
 for(i=0;i<5;i++){
        printf("%d\n",*(arr+i));
}
printf("*aptr\n");
 for(i=0;i<5;i++){
        printf("%d\n",*aptr);
}
}
