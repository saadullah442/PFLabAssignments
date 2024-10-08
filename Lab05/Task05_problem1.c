#include <stdio.h>
int main() {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  if(age > 0  && age < 13) {
   printf("Child");
  }
  else {
    if(age >= 13 && age < 20) {
       printf("Teenager");
     }
    else {
     if(age >= 20 && age < 30) {
       printf("Adult");
     }
     else {
       printf("Senior");    
     }
    
    }

  }
  
}