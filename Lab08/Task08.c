#include <stdio.h>

int main(){
	int size = 3;
	int i,j;
	int matrix[][size];
	int sdl_pt = 999999;
	int sdl_i = 0;
	int sdl_j = 0;
	
	// Taking numbers as input
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("Enter number: ");
			scanf("%d", &matrix[i][j]);
		}
	}

	
	// Finding saddle point(s)
	i=0;j=0;
	while(i < size && j < size){
		// Finding saddle point(s) by row
	 	for(j=0;j<size;j++){
			if(matrix[sdl_i][j] < sdl_pt) {
					sdl_pt = matrix[sdl_i][j];
					sdl_j = j;
			}
		}
		
		// Finding saddle point(s) by colum
		for(;i<size;i++){
			if(matrix[i][sdl_j] > sdl_pt) {
					break;
			}
		}
		
		
	}
	
	for(i=0;i < size;i++){
		
	}
	
	// Finding saddle point(s) by colum;
	for(i=0;i < size;i++){
		for(j=0;j<size;j++){
			if(matrix[i][j] < sdl_pt) {
				sdl_pt = matrix[i][j];
				sdl_j = j;
			}
		}
	}

	return 0;
}
