#include <stdio.h>
int main() {

  int i, num, factors, fibNum, sum;
  fibNum = 0;
  int fibArr[2];
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
    for(fibNum=0;fibNum<num;fibNum++){
      if(fibNum == 0) {
        fibArr[0] = 0;
        fibArr[1] = 0;
        printf("0\t");
      }
      else if(fibNum == 1) {
        fibArr[0] = 0;
        fibArr[1] = 1;
        printf("1\t");
      }
      else {
        sum = fibArr[0] + fibArr[1];
        fibArr[0] = fibArr[1];
        fibArr[1] = sum;
        printf("%d\t", sum);
      }

    }
  }
  else {
    printf("%d is not a prime number", num); 
  }
  

}