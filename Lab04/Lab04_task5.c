#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {

  char tempIn[] = "C", tempTo[] = "F";
  float temp,result;

  printf("Enter unit in which current temperature is: ");
  scanf("%s", &tempIn);
  
  printf("Enter unit in which to convert temperatur to: ");
  scanf("%s", &tempTo);

  printf("Enter temperature: ");
  scanf("%f", &temp);
  
  printf("Value of tempIn: %s\n", tempIn);
  printf("Value of tempTo: %s\n", tempTo);

  printf("%d\n", strcmp(tempTo,"K") || strcmp(tempTo,"k") );

  printf("%d\n", strcmp(tempIn,"C") || strcmp(tempIn,"c") );

  printf("%d\n", (!strcmp(tempIn,"C") || !strcmp(tempIn,"c")) && (!strcmp(tempTo,"K") || !strcmp(tempTo,"k")) );

  if( (!strcmp(tempIn,"C") || !strcmp(tempIn,"c")) && (!strcmp(tempTo,"K") || !strcmp(tempTo,"k")) )
  {
    result = temp + 273.15;
    printf("Your converted temperature is: %f %s", result, tempTo);
  }
  else if( (!strcmp(tempIn,"C") || !strcmp(tempIn,"c")) && (!strcmp(tempTo,"F") || !strcmp(tempTo,"f")) )
  {
    result = ( temp * 9/5 ) + 32;
    printf("Your converted temperature is: %f %s", result, tempTo);
  } 
  else if( (!strcmp(tempIn,"F") || !strcmp(tempIn,"f")) && (!strcmp(tempTo,"C") || !strcmp(tempTo,"c")) )
  {

    result = (temp - 32) * (5/9);
    printf("Your converted temperature is: %f %s", result, tempTo);
  } 
  else if( (!strcmp(tempIn,"F") || !strcmp(tempIn,"f")) && (!strcmp(tempTo,"K") || !strcmp(tempTo,"k")) )
  {
    result = ( (temp - 32) * (5/9) ) + 273.15;
    printf("Your converted temperature is: %f %s", result, tempTo);
  } 
  else if( (!strcmp(tempIn,"K") || !strcmp(tempIn,"k")) && (!strcmp(tempTo,"F") || !strcmp(tempTo,"f")) )
  {
    result = ( (temp - 273.15) * 9/5 ) + 32;
    printf("Your converted temperature is: %f %s", result, tempTo);
  } 
  else if( (!strcmp(tempIn,"K") || !strcmp(tempIn,"k")) && (!strcmp(tempTo,"C") || !strcmp(tempTo,"c")) )
  {
    
    result = temp - 273.15;
    printf("Your converted temperature is: %f %s", result, tempTo);
  } 
  else {
    printf("Wrong conversion entered");
  }  
}