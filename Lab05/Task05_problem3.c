#include <stdio.h>
int main() {

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
 
  if( (num % 3 == 0) && (num % 5 == 0) ) {

    printf("Number is both divisble by 3 and 5");

  }
  else {
    printf("Number not divisble by any of the two or maybe both");
  }



}