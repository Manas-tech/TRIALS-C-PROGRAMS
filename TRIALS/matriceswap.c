#include<stdio.h>
int main(){
	
	
	// MATRIX INPUT FROM USER 
    int a[3][3],b[3][3],i,j,result[3][3],swap;;
    printf("ENTER THE DETAILS FOR MATRIX 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 1 OF ELEMENT [%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    //TRANPOSE OF MATRIX
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				swap=a[i][j];
				a[i][j] = a[j][i];
				a[j][i]=swap;
			
		}
	}
	
	
	//PRINTING THE TRANSPOSE OF MATRIX 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
			
		}
		printf("\n\n");	
	}
	
	
	//SHIFTING A MATRIX TRANSPOSE TO B MATRIX
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		b[i][j] = a[i][j];
		}
	}
	
	
	//CHECKING THE MATRIX IS SYMMETRIC OR NOT 
	
	for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(a[i][j]!=b[j][i]){
    			printf("MATRIX IS NOT SYMETRIC\n");
    			return 0;
			}
		}
		
		}
		printf(" MATRIX IS SYMETRIC \n");
	
	}