#include <stdio.h>

int main(){
	
	int prim_num;
	int range;
	int j;
	int i =1;
	printf("Enter range: ");
	scanf("%d", &range);
	for(;i<=range;i++){
		prim_num = 0;
		j = 1;
		while(prim_num <= 2 && j <= i){
			
			if(i % j == 0) prim_num++;
			j++;
		}
		if(prim_num == 2) printf("%d ", i);
	}
	
	
	return 0;
}