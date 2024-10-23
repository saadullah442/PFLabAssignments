#include <stdio.h>

int main(){
	int size = 3;
	int i,j;
	int matrix[size][size];
	int sdl_pt = 9999999;
	int sdl_i = 0;
	int sdl_j = 0;
	
	// Taking numbers as input
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter number: ");
			scanf("%d", &matrix[i][j]);
		}
	}

	
	// Finding saddle point(s)
	i=0;j=0;
	while(sdl_i < size){
		// Finding saddle point(s) by row
	 	for(j=0;j<size;j++){
			// Changing Colum
			if(matrix[sdl_i][j] < sdl_pt) {
					sdl_pt = matrix[sdl_i][j];
					sdl_j = j;
			}
		}
		
		// Finding saddle point(s) by colum
		for(i=0;i<size;i++){
			// Changing row 
			if(matrix[i][sdl_j] > sdl_pt) {
				
				sdl_pt = 9999999;	
				break;
			}
		}
		if (sdl_pt != 9999999) printf("Saddle point is: %d\n", sdl_pt);
		sdl_pt = 9999999;
		sdl_i++;		
	}
	
	

	return 0;
}
