#include <stdio.h>
int main() {

// Declaring varialbes
  int temp[7];
  int i,avg;
  int userTemp;
  int sum = 0; 
  
// Taking temperature as input and storing it in array
  for(i = 0; i < 7; i++) {

    printf("Enter temperature: ");
    scanf("%d", &userTemp);
    temp[i] = userTemp;
    sum += userTemp; // sum of all temperatures

  }
  
  avg = sum/7; // calcualting average temperature

// Printing extreme temperatures
  for(i = 0; i < 7; i++) {

    //checking for extreme temperatures
    if(temp[i] > 40 || temp[i] < 0) {
      printf("Extreme temperature on day %d\n", i); 
    }

  }

  printf("Average temperature is: %d", avg);
  
}