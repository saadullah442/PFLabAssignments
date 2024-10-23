#include <stdio.h>

int main(){
	
	int num;
	int i = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	for(i = num; i > 0; i--){
		if(i % 2 != 0) printf("%2d", i);
		
	}
	
	
	return 0;
}