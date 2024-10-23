#include <stdio.h>

int main(){
	int row,col;
	int i,j;
	printf("Enter row: ");
	scanf("%d", &row);
	
	printf("Enter colum: ");
	scanf("%d", &col);
	
	int matrix[row][col];
	int tran_matrix[col][row];
		
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter any number: ");
			scanf("%d", &matrix[i][j]);	
		}
	}
	

	// Transposing matrix
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			tran_matrix[j][i] = matrix[i][j];
		}
		printf("\n");
		
	}	
  
	// Printing Transposed matrix
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%2d", tran_matrix[i][j]);
		}
		printf("\n");
	}	
  	
	
	return 0;
}