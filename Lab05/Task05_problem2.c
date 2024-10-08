#include <stdio.h>
int main() {
  int num;

  printf("Enter any integer: ");
  scanf("%d", &num);

  if(num == 0) {
    printf("Number is zero");
  } 
  else if(num < 0) {
    printf("Number is negative");
  }
  else {
    if(num % 2 == 0) {

      printf("Number is positive and even");

    }
    else {
      printf("Number is positive and odd");

    }
  }


}