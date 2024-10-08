#include <stdio.h>
int main() {

  int num, bNum, oneCount;
  oneCount = 0;
  printf("Enter any number in binary form: ");
  scanf("%d", &num);
  
  while(num!=0) {
  
    if(num % 10 == 1) {
      oneCount++;
    }
    num /= 10;
  }

  printf("Number of 1's are: %d", oneCount);  



  return 0;
}