#include <stdio.h>
int main() {
  // MIN age = 18
  // MIN credit score = 200
  // MIN income = 50,000



  int age,creditScore,income;

  printf("Enter Age: ");
  scanf("%d", &age);
 
  printf("Enter Score: ");
  scanf("%d", &creditScore);

  printf("Enter Income: ");
  scanf("%d", &income);


  if(age >= 18 && creditScore >= 200 && income >= 50,000) {
    printf("Eligible for loan");
  }
  else {
    printf("Not eligible for loan");
  }

  return 0;
}