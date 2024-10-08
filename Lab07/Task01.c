#include <stdio.h>
int main() {

  int size;
  printf("Enter Size of array: ");
  scanf("%d", &size);

  int arr[size];
  int i = 0;
  int sum = 0;

  for(; i < size; i++) {
    printf("Enter Number: ");
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("Sum of individual elements: %d", sum);




  return 0;
}