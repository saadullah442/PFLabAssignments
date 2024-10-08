#include <stdio.h>
int main() {
  char oper;

  int num1, num2, result;
   printf("Enter operator: \n");
  scanf("%c", &oper);  

  printf("Enter number 1: ");
  scanf("%d", &num1);
 
  printf("\nEnter number 2: ");
  scanf("%d", &num2);
  
  switch(oper)
  {
    case '+':
      result = num1 + num2;
      printf("Result: %d", result);
      break;

    case '-':
      result = num1 - num2;
      printf("Result: %d", result);
      break;

    case '/':
      result = num1 / num2;
      printf("Result: %d", result);
      break;

    case '*':
      result = num1 * num2;
      printf("Result: %d", result);
      break;

    case '%':
      result = num1 % num2;
      printf("Result: %d", result);
      break;   
    
    default:
      printf("Wrong operator");   
      break;
  }
  


  return 0;
}