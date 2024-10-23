#include <stdio.h>
int main(){
	
	int size;
	printf("Enter size of matrix: ");
	scanf("%d", &size);
	int i,j;
	int matrix[size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter a number: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(i=0;i<size;i++){
		
		printf("%2d", matrix[i][i]);
	}
	
	
	
	return 0;
}