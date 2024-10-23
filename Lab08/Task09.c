#include <stdio.h>
#include <limits.h>
int main(){

  int max_num = INT_MIN;
  int row, col;
  int i,j,max_i,max_j;

  // Taking rows and colums as input
  printf("Enter row: ");
  scanf("%d", &row);

  printf("Enter Colum: ");
  scanf("%d", &col);

  int matrix[row][col];

  
  // Taking numbers as input
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      printf("Enter any number: ");
      scanf("%d", &matrix[i][j]);
    }
  }

  // Checking for max number
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      // Current number is greater than prev value of max_num
      // Assign this value to max_num and its coordinates
      if(matrix[i][j] > max_num){
        max_num = matrix[i][j];
        max_i = i;
        max_j = j;
      }
    }
  }


  return 0;
}