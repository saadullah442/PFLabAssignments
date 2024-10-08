#include <stdio.h>
int main() {
	// Declaring Variables
	int num1;
	int num2;
	int temp;
	
	// Taking Inputs
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);

	// Swapping
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Swapped Num1: %d \n", num1);
	printf("Swapped Num2: %d \n", num2);
	
	return 0;	
}