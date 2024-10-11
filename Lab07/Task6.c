#include <stdio.h>
int main() {

  int num,size;
  int i,j;
  i= 0;
  j = 0;
  printf("Enter array size: ");
  scanf("%d", &size);
 
  int arr[size];

  for(i=0;i < size; i++){
    printf("Enter number: ");
    scanf("%d", &num);
    arr[i] = num;
      
  }

firsloop:
  do{
    i++;
    goto secondloop

  }while(i < size);

secondloop:
 j = 0;
 do{
   if(arr[i] == arr[j]) printf("%d is repeated in array\n", arr[i]);
 }while(j < size);
}