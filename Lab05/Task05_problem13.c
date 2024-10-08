#include <stdio.h>
#include <math.h>
int main() {

  int num, bNum, power, count, digit;

  char inp, encInp, decrInp;

  printf("Enter Any Character: ");
  scanf(" %c", &inp);

  encInp = ~(inp); 
  decrInp = ~(encInp); 

  printf("Encrypted Data: %c\n", encInp);
  printf("Decrypted Data: %c\n", decrInp);
  

  
	
  return 0;
}