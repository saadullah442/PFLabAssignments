#include <stdio.h>
int main() {

  float num1, num2;
  printf("Enter first number: ");
  scanf("%f", &num1);

  printf("Enter second number: ");
  scanf("%f", &num2);


  (num1 == num2) ? printf("Both numbers are equal"): (num1 > num2)? printf("%f is greater", num1): printf("%f is greater", num2);


}