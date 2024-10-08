#include <stdio.h>
int main() {

  int size;
  printf("Enter Size of array: ");
  scanf("%d", &size);

  int arr[size];
  int i = 0;
 
  for(; i < size; i++) {
    printf("Enter Number: ");
    scanf("%d", &arr[i]);   
  }
 
  for(i = size - 1; i >= 0; i--) {

    printf("%d ", arr[i]);
  }


  return 0;
}