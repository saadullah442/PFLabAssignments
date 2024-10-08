#include <stdio.h>
int main() {

  int inp, sum;
  

  sum = 0;
  do{
    printf("Enter a number: ");
    scanf("%d", &inp);
    sum = sum + inp;
    printf("Sum of inputs: %d\n", sum);
  }
  while(inp != 0);


}