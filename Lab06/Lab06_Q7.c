#include <stdio.h>
#include <math.h>
int main() {
  
  int sum, num, cpy, power, i, digit;
  

  printf("Enter a number: ");
  scanf("%d", &num);  

  i = 0;
  sum = 0;
  cpy = num;
  power = 1;
  digit = 0;

  while(cpy!= 0){
    while(cpy % 10 != 0) {  
      cpy--;
    }
    cpy /= 10;
    i++;
  }

  power = i;
  cpy = num;
  printf("Power is: %d\n", power);

  while(cpy != 0) {
    digit = 0;
    while(cpy % 10 != 0) {
      digit++;
      cpy--;
    }

    cpy /= 10;
    sum += (int)(pow(digit, power) + 1e-9);
  }  

  if(sum == num) printf("Number is Armstrong");
  else printf("Number is not Armstrong");

  return 0;
}