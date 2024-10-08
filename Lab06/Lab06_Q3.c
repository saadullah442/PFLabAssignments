#include <stdio.h>

int main() {

  int i,limit,pin,predPin;
  predPin = 5678;

  i = 0;
  limit = 3;

  do{
    printf("Enter Pin: ");
    scanf("%d", &pin);
    
    if(pin != predPin) {
      i++;
    }
    else{
      printf("Successfull");
      break;  
    }
    if(i == limit) printf("Card Blocked");
   
  }
  while((pin != predPin) && (i < limit));

}