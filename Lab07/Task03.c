#include <stdio.h>
int main() {

  char name[20];
  char email[60];
  char number[30];


  printf("Enter Name: ");
  scanf(" %[ A-Za-z]", name);

  /*printf("Enter email: ");
  scanf(" %[%@%]", email);*/

  printf("Enter Phone number: ");
  scanf(" %[ +0-9%-]", number);

  printf("%s\n", name);
  printf("%s\n", email);
  printf("%s\n", number);

  return 0;
}