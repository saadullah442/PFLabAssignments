#include <stdio.h>

int main(){
	int i = 0;
	int arr[] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	int j = 4;
	int temp;
	for(;i < 5;i++){
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = temp;
		j--;
	}

	// Printing Reverse array
	//for(i=0;i < 5;i++){
	//	printf("%d\n", arr[i]);
	//}





	return 0;
}