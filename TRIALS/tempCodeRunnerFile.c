#include<stdio.h>
int main()
{
    int a[5],b,c,swap;
    for (b=0;b<5;b++)
    {
        printf("ENTER THE VALUES\n");
        scanf("%d",&a[b]);
    }
    for (b=0;b<5;b++)
    {

        for (c=b+1;c<5;c++)
        {
            if(a[b]>a[c])
            {
                swap=a[b];
                a[b]=a[c];
                a[c]=swap;

            }
            
        }
        
    }
    printf("THE ARRANGED VALES ARE \n");
    for (b=0;b<5;b++)
    {
        printf("THE VALUES ARE %d\n",a[b]);
    }
    return 0;
}