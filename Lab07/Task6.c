#include <stdio.h>
int main() {
// Declaring variables
  int num,size;
  int i,j;
  i= 0;
  j = 0;

// Asking for array size
  printf("Enter array size: ");
  scanf("%d", &size);
 
  int arr[size];

// Asking for numbers and inserting them to array
  for(i=0;i < size; i++){
    printf("Enter number: ");
    scanf("%d", &num);
    arr[i] = num;   
  }

/* first loop to find duplicate element.
   This loop will pick one element*/
i=0;
firstloop:
  do{
  
    if (i != (size - 1)) goto secondloop;
  
  }while(i < (size - 1));

/* This statement will only run when firstloop is finished
   ending the program */
return 0;

/* second loop to find duplicate element.
   This loop will check if the picked element exists in different index or not */
secondloop:
 j = i + 1;
 do{
   
   
   if(arr[i] == arr[j]) {
     printf("%d is repeated in array\n", arr[i]);
     i++;
     goto firstloop;
   }
   j++;
 }while(j < size);
 i++;
 goto firstloop;
}