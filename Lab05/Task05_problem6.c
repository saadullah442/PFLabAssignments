#include <stdio.h>
int main() {

  float num;
  
  printf("Enter any number: ");
  scanf("%f", &num);

  (num == 0 )? printf("Number is zero") : (num < 0)? printf("Number is negative"): printf("Number is positive");
  

}