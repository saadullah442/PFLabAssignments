#include <stdio.h>

int main(){

  int rows, star_count;
  int space,i,j;
  int total_rows;
  int current_row;

  printf("Enter upper half of the rows: ");
  scanf("%d", &rows);
  
  star_count = 1;
  current_row = 0;
  total_rows = (rows*2) - 1;
  space = rows - 1;

  while(current_row < total_rows){

    for(i=0;i<space;i++){
      printf(" ");
    }
    for(i=0;i<star_count;i++){
      printf("*");
      printf(" ");
    }
    printf("\n");

    if (current_row < (rows - 1)) {
      space--;
      star_count++;
    }else {
      space++;
      star_count--; 
    }    

    current_row++;
  }

  return 0;
}