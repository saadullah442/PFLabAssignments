#include <stdio.h>
#include <stdlib.h>
int main(){

	int row, col, num, i, j;
	printf("Enter row:");
	scanf("%d", &row);
	printf("Enter colum: ");
	scanf("%d", &col);
	printf("Enter any number: ");
	scanf("%d", &num);
	int *mat1 = (int *)calloc(row * col, sizeof(int));
	int *mat2 = (int *)calloc(row * col, sizeof(int));
	int *mat3 = (int *)calloc(row * col, sizeof(int));
	for(i=0;i < row;i++) {
		for(j=0;j<col;j++){
			*(mat1 + i + j) = num;		
			*(mat2 + i + j) = num;
		}
	}
	// Adding two matrices
	for(i=0;i < row;i++) {
		for(j=0;j<col;j++){
			*(mat3 + i + j) = *(mat1 + i + j) + *(mat2 + i + j);		
		}
	}
	
	// Printing matrix 3
	for(i=0;i < row;i++) {
		for(j=0;j<col;j++){
			printf("%3d",*(mat3 + i + j));		
		}
		printf("\n");
	}
	
	return 0;
}