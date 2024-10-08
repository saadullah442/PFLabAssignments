#include <stdio.h>
int main() {

	// Declaring variables
	int onetripdist;
	int fuelavg;
	int onetripfuelconsumed;
	int totalfuelconsumed;
	float totalfuelcost;
	float forwtripfuelcost;
	float backtripfuelcost;

	// Taking input
	printf("Enter you car's average. Value should be positive: ");
	scanf("%d", &fuelavg);
	
	//Validating input
	while (fuelavg <= 0) {
		printf("Enter you car's average. Value should be positive: ");
		scanf("%d", &fuelavg);
	} 	
	
	// Calculating fuel cost and fuel consumption
	onetripdist = 1207;
	onetripfuelconsumed = (onetripdist/fuelavg);
	forwtripfuelcost = onetripfuelconsumed * 118;

	// printf("one trip consumption: %f \n", onetripfuelconsumed);

	backtripfuelcost = onetripfuelconsumed * 123;
	totalfuelcost = forwtripfuelcost + backtripfuelcost;
	totalfuelconsumed = 2 * onetripfuelconsumed;

	// Printing total fuel consumption and cost
	printf("Total fuel consumption: %d \n", totalfuelconsumed);
	printf("Total fuel cost: %f \n", totalfuelcost);
	

	return 0;
}	