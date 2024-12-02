#include <stdio.h>


struct emp {
	int id;
	char name[10];
	int salary;
};

int main(){
	
	struct emp my_emps[10] = {
	{1, "Saad", 232323},
	{2, "Hara", 990213},
	{3, "Fira", 10324},
	{4, "Giga", 98201},
	{5, "Chad", 40134},
	{6, "Beta", 91},
	{7, "Omega", 8193},
	{8, "Chill Guy", 781239},
	{9, "Shreck", 78123},
	{10, "Kratos", 89123}
	};
	
	struct emp *ptr = my_emps;
	int temp;
	int ending = 9;
	int i = 0;
	int j = 0;
	// Sorting in ascending order
	for(i=0;i < ending;i++) {
		for(j= 0;j < (ending - i);j++){
			if((*(ptr + j)).salary > (*(ptr + j + 1)).salary){
				temp = (*(ptr + j)).salary;
				(*(ptr + j)).salary = (*(ptr + j + 1)).salary;
				(*(ptr + j + 1)).salary = temp;
			}
		}// End for j
		ending--;
	}

	// Printing array;
	for(i=0;i<10;i++){
		printf("%d\n", (*(ptr + i)).salary);

	}

	


	return 0;
}