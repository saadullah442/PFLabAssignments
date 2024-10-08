#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
  int i;
  i = 1;
  char decision[] = "n";
  float radius, length, breath, base, height;


  while(i <= 3 && (strcmp(decision, "n") == 0 || strcmp(decision, "N") == 0))
  {
    if( i == 1) 
    {
      printf("Calculate the area of a circle. Y/N: ");
      scanf("%s", &decision);
    }
    else if( i == 2) 
    {
      printf("Calculate the area of a rectangle. Y/N: ");
      scanf("%s", &decision);
    }
    else 
    {
      printf("Calculate the area of a triange. Y/N: ");
      scanf("%s", &decision);
    }
    while(strcmp(decision, "y") != 0 && strcmp(decision, "Y") != 0 && strcmp(decision, "n") != 0 && strcmp(decision, "N") != 0 ){
      printf("Reinput: ");
      scanf("%s", &decision);
    }
    printf("value of i: %d \n", i);
    i = i + 1;
  }


  i = i - 1;
  if(strcmp(decision,"n") == 0 || strcmp(decision, "N") == 0) 
  {
    printf("Exit");  

  }
  else
  {
    if( i == 1) 
    {
      printf("Enter radius: ");
      scanf("%f", &radius);
     
      printf("Area is : %f", (22/7) * ( pow(radius , 2.0) ) );
     
    }
    else if( i == 2) 
    {
      printf("Enter length: ");
      scanf("%f", &length);
     
      printf("Enter breath: ");
      scanf("%f", &breath);

      printf("Area is : %f", length * breath);
    }
    else 
    {

      printf("Enter base: ");
      scanf("%f", &base);
      
      printf("Enter height: ");
      scanf("%f", &height);

      printf("Area is: %f", (1/2) * (base * height));
    
    }
  }

}