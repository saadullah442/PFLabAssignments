#include <stdio.h>
int main() {

  int age;
  char citizen;
  
  printf("Enter age: ");
  scanf("%d", &age);

  printf("Enter citizenship: ");
  scanf(" %c", &citizen);

  if(age >= 18) {
    if(citizen == 'P' || citizen == 'p') {
       printf("You are eligible to vote");
    }
    else {
      printf("You are not eligible");
    }
  }
  else {
    printf("You are not eligible");
  }

}