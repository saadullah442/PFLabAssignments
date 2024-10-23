#include <stdio.h>

int main(){


  int matrix1[][3] = {{1,2,3}, 
		     {4,5,6}, 
		     {7,8,9}};

  int matrix2[][3] = {{10,11,12}, 
		     {13,14,15}, 
		     {16,17,18}};

  int matrix3[3][3] = {0};

  int i,j,k;


  // Multiplying two matrix and storing result in 3rd matrix
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      for(k=0;k<3;k++){
        matrix3[i][j] += (matrix1[i][k] * matrix2[k][j]);
      }      
    }

  }

  // Displaying the third matrix
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%7d", matrix3[i][j]);
    }
    printf("\n");
  }


  return 0;
}