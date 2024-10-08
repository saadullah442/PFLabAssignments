#include <stdio.h>
int main() {
	
	// Declaring variables
	float taxrate;
	int salary;
	float tax;
	
	// Taking input
	printf("Enter Taxrate: ");
	scanf("%f", &taxrate);
	printf("Enter Salary: ");
	scanf("%d", &salary);
	
	// Calculating tax
	tax = (salary * taxrate)/100;
	
	// Printing to user amount of tax he has to pay
	printf("You will have to pay tax of: %f", tax);

	return 0;
}