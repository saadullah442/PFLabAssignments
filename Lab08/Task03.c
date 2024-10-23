#include <stdio.h>
int main(){
	int i,j,k;
	int sum = 0;
	int sum_pg1, sm_pg2;
	int matrix[2][3][3] = {{  
					  {1,2,3}, 
	                  {4,5,6}, 
				  	  {7,8,9}	
				   },
				   {
				   	  {10,12,13}, 
	                  {14,15,16}, 
				  	  {17,18,19}	
				   }};
					
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum += matrix[i][j][k];
			}
		}
	}
	printf("Sum: %d", sum);
	return 0;
}