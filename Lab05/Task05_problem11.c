#include <stdio.h>
int main() {
  
  int num1,num2,num3;
  printf("Enter First Number: ");
  scanf("%d", &num1);
  
  printf("Enter Second Number: ");
  scanf("%d", &num2);
  
  printf("Enter Third Number: ");
  scanf("%d", &num3);
  
  if( (num1 > num2 && num2 >= num3) || (num1 > num3 && num3 >= num2)) {
    printf("First number greatest");
  }
  else if( (num2 > num1 && num1 >= num3) || (num2 > num3 && num3 >= num1) ) {
    printf("Second number greatest");
  }
  else if(num3 > num1 && num1 >= num2 || (num3 > num2 && num2 >= num1) ) {
    printf("Third number greatest");
  }
  else if(num2 == num1 && num2 > num3) {
    printf("Second and first number both greatest");
  }
  else if(num3 == num1 && num3 > num2) {
    printf("Third and first number both greatest");
  }
  else if(num3 == num2 && num3 > num1) {
    printf("Third and second number both greatest");
  }
  else {
    printf("All numbers equal");
  }

  return 0;
}