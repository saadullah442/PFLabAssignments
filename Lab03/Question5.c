#include <stdio.h>
int main() {
	
	// Declaring variables
	float principle;
	float interest;
	int timeperiod;
	float simpleinterest;

	// Getting user input
	
	printf("Enter your principle amount between 100 and 1,000,0000: ");
	scanf("%f", &principle);
	// Validating principle
	while (principle <= 100) {
		printf("Enter your principle amount between 100 and 1,000,0000: ");
		scanf("%f", &principle);
	};
	while (principle >= 10000000) {
		printf("Enter your principle amount between 100 and 1,000,0000: ");
		scanf("%f", &principle);
	};	


	printf("Enter interst rate between 5 and 10: ");
	scanf("%f", &interest);
	// Validating interest
	while(interest <= 5) {
		printf("Enter interst rate between 5 and 10: ");
		scanf("%f", &interest);
	};
	
	while(interest >= 10) {
		printf("Enter interst rate between 5 and 10: ");
		scanf("%f", &interest);
	};
	

	printf("Enter time period between 1 and 10: ");
	scanf("%d", &timeperiod);
	// Validating Time period
	while(timeperiod <= 1) {
		printf("Enter time period between 1 and 10: ");
		scanf("%d", &timeperiod);
	};
	
	while(timeperiod >= 10) {
		printf("Enter time period between 1 and 10: ");
		scanf("%d", &timeperiod);
	};

	simpleinterest = (principle * interest * timeperiod)/100;
	printf("You will have an interst of: %f", simpleinterest);

	return 0;
}