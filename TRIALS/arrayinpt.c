#include <stdio.h>
int main(){
int a[100],n,x,z,c=0;
printf("enter array size - ");
scanf("%d",&n);
printf("enter array elaments -\n ");
for (int i =1 ; i<=n ;i++){
    scanf("%d",&a[i]);
}
printf(" array elaments - \n");
for (int i =1 ; i<=n ;i++){
    printf("%d\n",a[i]);
}
printf(" enter the x  ");
scanf("%d",&x);

for (int i =0 ; i<=n ;i++){
for (int j =0 ; j<=n ;j++){
    if (i==j){
        continue;
    }
    
    if (a[i]+a[j]==x){
          c=1;
          break;
      
    }
    else{
        c=0;
    }
 
}


}

if (c==1){
    printf("yes");
}
else {
    printf("no");
}






























}