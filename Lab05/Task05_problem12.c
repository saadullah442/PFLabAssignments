#include <stdio.h>
int main() {
  // MAX total score = 150
  // MAX assignment Score = 50
  // MAX exam Score = 100;
  // Grades are: A,B,C,D,E,F
  char grade;
  int attendance;
  float totalScore, assignScore, examRes;
  do {
    printf("Enter Attendance: ");
    scanf("%d", &attendance);
  }while(attendance < 0 || attendance > 100);
  
  do{
    printf("Enter Assignment Score: ");
    scanf("%f", &assignScore);
  }while(assignScore < 0 || assignScore > 50);

  do{
    printf("Enter Exam Result: ");
    scanf("%f", &examRes);
  }while(examRes < 0 || examRes > 100);

  totalScore = assignScore + examRes;

  if(attendance >= 80) {
    if(totalScore > 135 && totalScore <= 150) {
      grade = 'A';
    }
    else if(totalScore > 120 && totalScore <= 135) {
      grade = 'B';
    }
    else if(totalScore > 105 && totalScore <= 120) {
      grade = 'C';
    }
    else if(totalScore > 90 && totalScore <= 105) {
      grade = 'D';
    }
    else if(totalScore > 75 && totalScore <= 90) {
      grade = 'E';
    }
    else {
      grade = 'F';
    }

  }
  else {
    grade = 'F';   
  }  
  
  printf("Grade: %c", grade);
  return 0;   
}