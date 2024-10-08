#include <stdio.h>
int main() {

  int i,num, factors;
  factors = 0;
  do{
    printf("Enter number: ");
    scanf("%d", &num);
  }
  while(num <= 1);
  for(i=1;i<=num;i++) {
    if(num%i == 0) {
      factors++;
    }
  }
  if(factors == 2) {
    printf("%d is a prime number", num);
  }
  else {
    printf("%d is not a prime number", num); 
  }
  
}