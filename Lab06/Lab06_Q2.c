#include <stdio.h>
int main() {

  int lB, uB, sum;

  printf("Enter lower bound: ");
  scanf("%d", &lB);
  
  printf("Enter upper bound: ");
  scanf("%d", &uB);

  sum = 0;
  
  while(lB < uB) {
    lB++;
    if(lB%2 == 0) {
       sum = sum + lB;
    }

  }
  printf("Sum of all even numbers is: %d", sum);

}