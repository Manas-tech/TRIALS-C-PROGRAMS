#include <stdio.h>
int main()
{
    int num;
    
printf("enter no of terms ");
scanf("%d",&num);
for (int i=1;i<=num;i++)
{
    printnextterm();
    }
}

void printnextterm()
    {
        static int f1=0,f2=1;
    int nextterm;
    nextterm=f1+f2;
    f2=f1;
    f1=nextterm;
    printf("%d\n",nextterm);  }


