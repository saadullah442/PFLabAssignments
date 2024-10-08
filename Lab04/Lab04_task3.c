#include <stdio.h>
int main() {

  char charac;
  
  printf("Enter a character: ");
  scanf("%c", &charac);
  


    if(charac == 'a' || charac == 'e' || charac == 'i' || charac == 'o' || charac == 'u' || charac == 'A' ||     charac == 'E' || charac == 'I' || charac == 'O' || charac == 'U') {
     
       printf("Is a vowel");

    }
    else if (charac == 'b' || charac == 'c' || charac == 'd' || charac == 'f' || charac == 'g' || charac == 'h'     || charac == 'p' || charac == 'n' || charac == 'm' || charac == 'l' || charac == 'k' || charac == 'j' ||        charac == 'q' || charac == 'r' || charac == 's' || charac == 't' || charac == 'v' || charac == 'w' ||           charac == 'x' || charac == 'y' || charac == 'z')
    {
      printf("It is a consonant");
    }
    else if(charac == 'B' || charac == 'C' || charac == 'D' || charac == 'F' || charac == 'G' || charac == 'H'     || charac == 'P' || charac == 'N' || charac == 'M' || charac == 'L' || charac == 'K' || charac == 'J' ||        charac == 'Q' || charac == 'R' || charac == 'S' || charac == 'T' || charac == 'V' || charac == 'W' ||           charac == 'X' || charac == 'Y' || charac == 'Z') 
   {
     printf("It is a consonant");            

   }
   else if(charac >= '0' && charac <= '9') 
   {
     printf("It is a digit");
   }
   else 
   {
     printf("It is a special charcter");
   }
  

}