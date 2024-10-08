#include <stdio.h>
#include <stdbool.h>
int main() {




  int arr[10] = {32, 41, 123, 312, 12, 2, 1, 123, 42, 13};
  int number = 0;
  int i = 0;
  int numAtIndex = 0;
  int size = sizeof(arr)/sizeof(arr[0]);
  bool numberFound = false;

  printf("Enter a number: ");
  scanf("%d", &number);


  while(i < size && numberFound == false) {

    if(arr[i] == number) {
      numberFound = true;
      numAtIndex = i;
    }
    i++;  
  }
  
  numberFound == false ? printf("%d not found", number) : printf("%d found at index %d", number, numAtIndex);
  


 
}