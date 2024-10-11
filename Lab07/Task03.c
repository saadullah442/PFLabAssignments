#include <stdio.h>
int main() {
  // Declaring variables
  char name[20];
  char email[30];
  char phone[20];

  // validating all inputs
  printf("Enter name: ");
  scanf(" %[a-zA-z]", name);
  

  printf("Enter email: ");
  scanf(" %[0-9a-zA-Z@a-zA-Z0-9.]", email);
 

  printf("Enter phone: ");
  scanf(" %[+0-9- ]", phone);
  

  // Printing all the validated inputs
  printf("Your name is: %s\n", name);
  printf("Your email is: %s\n", email);
  printf("Your phone number is: %s\n", phone);
  
}