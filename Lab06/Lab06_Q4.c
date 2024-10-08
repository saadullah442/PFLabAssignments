#include <stdio.h>
int main() {

  char msgsent;
  int streak;
  streak = -1;
  
  do{
    printf("Did you send message today? Y/N: ");
    scanf(" %c", &msgsent);
    streak++;
    printf("Your sreak is: %d\n", sreak);
  }
  while(msgsent == 'Y' || msgsent == 'y');
  
  printf("Your sreak is: %d", streak);

}