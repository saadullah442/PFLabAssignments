#include <stdio.h>
#include <stdlib.h>
int main(){
	int digit,n, sum;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int *ptr = (int *)malloc(n * sizeof(int));
	int i = 0;
	sum = 0;	
	for(;i<n;i++){
		printf("Enter any integer: ");
		scanf("%d", &digit);
		*(ptr + i) = digit;
		sum += digit;
	}
	printf("\n");		
	printf("Sum after one loop: %d\n", sum);
	// Reallocating array
	ptr = (int *)realloc(ptr, n * sizeof(int));
	for(i=n;i< 2 * n;i++){
		printf("Enter any integer second time: ");
		scanf("%d", &digit);
		*(ptr + i) = digit;
		sum += digit;
	}
	printf("\n");
	// Printing sum
	printf("Sum of all digits: %d\n", sum);	
	
	return 0;
}