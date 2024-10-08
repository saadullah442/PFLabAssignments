#include <stdio.h>
int main() {

  int num, sum, digit;
  digit = 0;
  sum = 0;

  printf("Enter any number: ");
  scanf("%d", &num); 

  while(num != 0) {
    digit = 0;
    while(num % 10 != 0) {
      num--;
      digit++;
    }
    num /= 10;
    sum += digit;
  }

  printf("The sum of individual digits is: %d", sum);



  return 0;
}