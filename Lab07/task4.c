#include <stdio.h>
#include <stdbool.h>

int main() {
  int size;
  int i, num;
  int min, max;

  printf("Enter number of elements: ");
  scanf("%d", &size);

  int arr[100];

  for(i=0;i < size;i++) {
    printf("Enter a number: ");
    scanf("%d", &num);
    arr[i] = num;
    printf("%d\n", arr[i]);    
  }

  for(i=0;i < size;i++) {
  
    if(i == 0) {
      min = arr[i];
      max = arr[i];
    }

    if(arr[i] < min) min = arr[i];
    if(arr[i] > max) max = arr[i];

  }
  printf("Max number is: %d\n", max);
  printf("Min number is: %d\n", min);

  

  
}